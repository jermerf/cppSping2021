#include <iostream>
using namespace std;

void intSizes();
void arraySizes();
void arrayInitialization();
void arrayFunctions();
void arrArgument(int nums[], int len);
void arrMutator(int nums[], int len);
void arrayFor();
void ttt();

int main() {
  // intSizes();
  // arraySizes();
  // arrayInitialization();
  // arrayFunctions();
  // arrayFor();
}

void arrayFor() {
  const int NUM_LEN = 4;
  int myArray[NUM_LEN];
  for (int i = 0; i < NUM_LEN; i++) {
    cout << "myArray[" << i << "] = ";
    cin >> myArray[i];
  }
  for (int n : myArray) {
    cout << "n is " << n << endl;
  }
}

void arrArgument(int nums[], int len) {
  for (int i = 0; i < len; i++) {
    cout << "Arr Argument[" << i << "]: " << nums[i] << endl;
  }
}

void arrMutator(int nums[], int len) {
  for (int i = 0; i < len; i++) {
    nums[i] = nums[i] + 1;
    cout << "Arr Argument[" << i << "]: " << nums[i] << endl;
  }
}

void arrayFunctions() {
  int ages[] = {99, 88, 77, 66, 55, 44, 33};
  int len = sizeof(ages) / sizeof(*ages);
  arrArgument(ages, len);
  arrMutator(ages, len);
  arrArgument(ages, len);
}

const int COUNTER_SIZE = 100;
void arrayInitialization() {
  int ages[] = {99, 88, 77, 66, 55, 44, 33};
  // int counter[100]; // Hard coding is bad
  int counter[COUNTER_SIZE];

  for (int i = 0; i < 100; i++) {
    counter[i] = i + 1;
  }

  int arrLen;
  cout << "How big of an array?: ";
  cin >> arrLen;
  // int randos[arrLen];
}

void intSizes() {
  short myShort = 42;
  int myInt = 42;
  long myLong = 42;
  long long myLongLong = 42;

  cout << "short: " << sizeof(myShort) << endl;
  cout << "int: " << sizeof(myInt) << endl;
  cout << "long: " << sizeof(myLong) << endl;
  cout << "long long: " << sizeof(myLongLong) << endl;
}
void arraySizes() {
  int myArray[5];
  myArray[0] = 52;
  myArray[1] = 62;
  myArray[2] = 72;
  myArray[3] = 32;
  myArray[4] = 92;

  cout << "Array sizeof(): " << sizeof(myArray) << endl;
  cout << "Array sizeof(pointer): " << sizeof(*myArray) << endl;
  cout << "Array length(array): " << sizeof(myArray) / sizeof(*myArray) << endl;
}