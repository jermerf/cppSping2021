#include <iostream>
#include <string>
#include <vector>

using namespace std;

void intArrayInput();
void betterInput();
void betterArrayInput();
void betterVectorInput();
void vectorPoem();

int main() {
  // intArrayInput();
  // betterInput();
  // betterArrayInput();
  // betterVectorInput();
  // vectorPoem();
  string sentence = "We are looking for a needle in a haystack";
  int iNeedle = sentence.find("needle");
  cout << sentence << endl;
  cout << "Found 'needle' at " << iNeedle << endl;
  cout << "This was followed by _" << sentence.substr(iNeedle + 6, 5);
}

void vectorPoem() {
  vector<string> lines;
  int keepGoing = true;
  while (keepGoing) {
    string myInput;
    cout << "Enter some words: ";
    getline(cin, myInput);
    if (myInput.compare("--") == 0) {
      cout << "...Ending";
      keepGoing = false;
    }
    lines.push_back(myInput);
  }
  cout << endl << sizeof(lines);
}

void betterVectorInput() {
  vector<int> numbers;
  int keepGoing = true;
  while (keepGoing) {
    string myInput;
    cout << "Enter a number: ";
    cin >> myInput;
    try {
      int num = stoi(myInput);
      numbers.push_back(num);
      for (int i = 0; i < numbers.size(); i++) {
        cout << " " << numbers[i];
      }
      cout << endl;
    } catch (invalid_argument err) {
      cout << "That was not a number..." << endl;
      keepGoing = false;
    }
  }
  cout << endl << sizeof(numbers) / sizeof(numbers[0]);
}

void betterArrayInput() {
  int numbers[10];
  int index = 0;
  int keepGoing = true;
  while (keepGoing) {
    string myInput;
    cout << "Enter a number: ";
    cin >> myInput;
    try {
      int num = stoi(myInput);
      numbers[index] = num;
      index++;
      for (int i = 0; i < index; i++) {
        cout << " " << numbers[i];
      }
    } catch (invalid_argument err) {
      cout << "That was not a number..." << endl;
      keepGoing = false;
    }
  }
  cout << endl << sizeof(numbers) / sizeof(*numbers);
}

void betterInput() {
  string myInput;
  cout << "Enter a number: ";
  cin >> myInput;
  try {
    int num = stoi(myInput);
  } catch (invalid_argument err) {
    cout << "That was not a number..." << endl;
  }
  cout << "Your number was " << myInput;
}

const int AGE_COUNT = 5;
void intArrayInput() {
  int ages[AGE_COUNT];

  for (int i = 0; i < AGE_COUNT; i++) {
    cin >> ages[i];
  }

  for (int i = 0; i < AGE_COUNT; i++) {
    cout << "Number " << i << ": " << ages[i] << endl;
  }
}