#include <iostream>
using namespace std;

void foo();
void foo2();

int main() {
  bool keepGoing = true;
  while (keepGoing) {
    for (int i = 0; i < 1000000; i++) {
      foo();
    }
    char res;
    cout << "Keep going? ";
    cin >> res;
    keepGoing = res == 'y' || res == 'Y';
  }
}

void foo() {
  int* p = (int*)1000;
  delete p;
}
