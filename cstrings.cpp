#include <cstring>
#include <iostream>
#include <string>
using namespace std;

void longCharArray();
void charArrayString();
void charArrayInput();
void stringInput();

int main() {
  // longCharArray();
  // charArrayString();
  // charArrayInput();
  stringInput();
}

void stringInput() {
  string name;
  cout << "What is your name? ";
  getline(cin, name);
  cout << name << endl;
  cout << name[0];
  cout << name[1];
  cout << name[2] << endl;

  cout << "Length: " << name.length() << endl;
  cout << "Size: " << name.size() << endl;
  cout << "Capacity: " << name.capacity() << endl;
  name.append("123456789012345");

  cout << "Length: " << name.length() << endl;
  cout << "Size: " << name.size() << endl;
  cout << "Capacity: " << name.capacity() << endl;
  for (int i = 17; i < 30; i++) {
    cout << "char[" << i << "]: " << name[i] << endl;
  }
}

void charArrayInput() {
  char words[20];
  cin >> words;
  cout << words;
}

void charArrayString() {
  char words[10] = "123456789";
  cout << "_" << words << "_";
  char wordsCopy[10];
  strcpy(wordsCopy, words);
  cout << "copy_" << wordsCopy << "_";
  if (words == wordsCopy) {
    cout << "They're the same";
  } else {
    cout << "They're NOT the same";
  }
  wordsCopy[5] = '+';
  cout << endl << words << "_" << wordsCopy;

  char number[4] = "321";
  int num = atoi(number);
  cout << "That number times 2 is " << 2 * num;
}

void longCharArray() {
  char words[20];
  words[0] = 'w';
  words[1] = 'o';
  words[2] = 'r';
  words[3] = 'd';
  words[4] = 's';
  words[5] = ' ';
  words[6] = 'y';
  words[7] = 'a';
  words[8] = 'y';
  words[9] = '\0';
  words[10] = 'w';
  words[11] = 'o';
  words[12] = 'r';
  words[13] = 'd';
  words[14] = 's';
  words[15] = ' ';
  words[16] = 'y';
  words[17] = 'a';
  words[18] = 'y';
  words[19] = '\0';
  cout << "_" << words << "_";
}
