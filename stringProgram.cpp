#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string qString(string query) {
  string response;
  cout << query << endl;
  cin >> response;
  return response;
}

int qInt(string query) { return stoi(qString(query)); }

bool qBool(string query) {
  string res = qString(query);
  char firstLetter = tolower(res[0]);
  return firstLetter == 'y';
}

void stringMain() {
  string fName, lName;
  fName = qString("What is your first name?");
  lName = qString("What is your last name?");
  cout << "Hello " << fName << ' ' << lName << ", I am the computer!";
}

void cmathMain() {
  int num1, num2;
  num1 = qInt("Pick a number from 1 to 100");
  num2 = qInt("Pick a perfect square number");
  cout << "num1 " << num1 << endl << "num2 " << num2;
}

enum Cat { Tesla = 7, Edison = 4 };
void enumMain() {
  Cat fav = Cat::Tesla;
  switch (fav) {
    case Tesla:
      cout << "Black kitty" << endl;
      break;
    case Edison:
      cout << "Grey and White kitty" << endl;
      break;
  }
}
void ifMain() {
  int x = 42;
  int y = 99;
  int z = 120;
  if (x > 100) {
    cout << "x is big" << endl;
  }

  if (y > 100) {
    cout << "y is big" << endl;
  } else {
    cout << "y is small or negative" << endl;
  }

  if (z > 100) {
    cout << "z is big" << endl;
  } else if (z < 0) {
    cout << "z is negative" << endl;
  } else {
    cout << "z is small" << endl;
  }
}

string restaurantMain() {
  if (qBool("Are you in Canada?")) {
    return "Tim Hortons";
  } else {
    if (qBool("Is it before 1030AM?")) {
      if (qBool("Are you a police officer")) {
        return "Dunkin' Donuts";
      } else {
        return "McDonald's";
      }
    } else {
      if (qBool("Do you live on the West coast?")) {
        if (qBool("Is it after 1000pm?")) {
          return "Jack in the box";
        } else {
          return "In-n-Out Burger";
        }
      } else {
        return "Burger King";
      }
    }
  }
}
string restaurantMainWithLessElseClauses() {
  if (qBool("Are you in Canada?")) {
    return "Tim Hortons";
  }
  if (qBool("Is it before 1030AM?")) {
    if (qBool("Are you a police officer")) {
      return "Dunkin' Donuts";
    } else {
      return "McDonald's";
    }
  }
  if (qBool("Do you live on the West coast?")) {
    if (qBool("Is it after 1000pm?")) {
      return "Jack in the box";
    } else {
      return "In-n-Out Burger";
    }
  }
  return "Burger King";
}

void loopMain() {
  // 3 types of loops: while, do, for
  int count = 1;
  while (count <= 10) {
    cout << count << endl;
    count++;
  }
  // Same as while loop
  for (int c = 1; c <= 10; c++) {
    cout << c << endl;
  }

  bool keepGoing = true;
  while (keepGoing) {
    keepGoing = qBool("Would you like to keep going?");
  }

  for (bool kg = true; kg; kg = qBool("For to keep going?")) {
  }
}

const string MENU =
    "0) enumMain()\n"
    "1) stringMain()\n"
    "2) cmathMain()\n"
    "3) ifMain()\n"
    "4) restaurantMain()\n"
    "5) loopMain()\n";

int main() {
  bool keepGoing = true;
  do {
    int choice = qInt(MENU);
    switch (choice) {
      case 0:
        enumMain();
        break;
      case 1:
        stringMain();
        break;
      case 2:
        cmathMain();
        break;
      case 3:
        ifMain();
        break;
      case 4:
        cout << restaurantMain();
        break;
      case 5:
        loopMain();
        break;
    }
    keepGoing = qBool("\033[1;31mRun program again? (y/n)");
  } while (keepGoing);
}