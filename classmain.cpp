#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cat {
 private:
  string name;
  int age;

 protected:
  vector<Cat> offspring = vector<Cat>();

 public:
  Cat() {
    name = "Default cat";
    age = 0;
  }
  Cat(string name, int age) {
    this->name = name;
    this->age = age;
  }
  Cat(int age, string name) {
    this->name = name;
    this->age = age;
  }
  string getName() {
    cout << "Name acquired for: " << name;
    return name;
  }
  int getAge() { return age; }
  void setName(string name) {
    if (name.compare("") == 0 || name.compare(" ") == 0) {
      cout << "Invalid name, must have actual letters";
      return;
    }
    this->name = name;
  }
  void setAge(int age) {
    if (age < 0 || age > 38) {
      cout << "Invalid age or you have the oldest cat to ever live..." << endl;
      return;
    }
    this->age = age;
  }
  string describe() {
    return "The cat " + name + " is " + to_string(age) +
           " years old\n"
           " and has " +
           to_string(offspring.size()) + " offspring.\n";
  }
  Cat mate(Cat partner) { return this->mate(&partner); }
  Cat mate(Cat* partner) {
    string name = "";
    string n1 = this->name;
    string n2 = partner->name;
    int nameLen = n1.length();
    if (n2.length() > nameLen) nameLen = n2.length();
    for (int i = 0; i < nameLen; i++) {
      string n = (i % 2 == 0 ? n1 : n2);
      int index = i % n.length();
      name += n[index];
    }
    Cat kitten = Cat(name, 0);
    offspring.push_back(kitten);
    partner->offspring.push_back(kitten);
    return kitten;
  }
};

void catNap(Cat*);

int main() {
  Cat t = Cat();
  cout << t.describe() << endl;
  Cat tesla = Cat("Tesla", 7);
  catNap(&tesla);
  cout << tesla.describe() << endl;
  tesla.setAge(45);
  cout << tesla.describe() << endl;
  Cat fabio = Cat("Fabiokitty", 6);

  Cat k1 = tesla.mate(&fabio);
  cout << "There is a new kitten " << k1.describe();

  // ... Years later
  k1.setAge(2);
  Cat mittens = Cat("Mittens", 3);

  Cat k2 = k1.mate(mittens);

  cout << "There is a new kitten " << k2.describe();

  Cat monroebio = Cat("Monroebio", 20);
  Cat k3 = monroebio.mate(fabio);

  cout << "There is a new kitten " << k3.describe();
  cout << fabio.describe();
}

void catNap(Cat* c) {
  cout << c->getName() << " is taking a nap";
  cout << endl;
}