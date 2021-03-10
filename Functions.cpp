#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int getInt(string msg);
double getDouble(string msg);
int passByValue(int arg);
int passByReference(int &arg);
int foo();
int foo(int n);
int foo(int n1, int n2);
void drawHouse();
void drawHouse(double, double);
void drawHouse(int, int);
void drawHouse(double, double, int, int, bool, int);

void functionMain() {
  int toRoot = getInt("Please enter an integer to square-root:");
  cout << "The square root of " << toRoot << " is " << sqrt(toRoot);
  double dToRoot = getDouble("Please enter a double to square-root:");
  cout << "The square root of " << dToRoot << " is " << sqrt(dToRoot);
  // notCallableFromMain();  // Can't be called
}

void passByMain() {
  int x = 4;
  cout << "Pass by value gives " << passByValue(x) << endl;
  cout << " - The current value of x is " << x << endl;
  cout << "Pass by reference gives " << passByReference(x) << endl;
  cout << " - The current value of x is " << x << endl;
}

void overloadMain() {
  cout << foo() << endl;
  cout << foo(4) << endl;
  cout << foo(40, 5) << endl;
}

int foo() {
  cout << "chicken foo() called" << endl;
  return foo(0);
}
int foo(int n) {
  cout << "beef foo(int) called" << endl;
  return foo(n, n);
}
int foo(int n1, int n2) {
  cout << "pork foo(int,int) called" << endl;
  return n1 * n2;
}

int houseMain() {
  drawHouse();
  drawHouse(30, 4, true, 800);
}

void drawHouse() { drawHouse(0, 0); }
void drawHouse(double x, double y) { drawHouse(x, y, 2, 1, true, 3); }
void drawHouse(int windows, int doors) {
  drawHouse(0, 0, windows, doors, false, 0);
}
void drawHouse(double x, double y, int windows, int doors, bool driveway,
               int trees) {
  // Draws a house
}

const string MENU =
    "1) functionMain()\n"
    "2) passByMain()\n"
    "3) overloadMain()\n";

int main() {
  bool keepGoing = true;
  do {
    cout << MENU;
    int choice;
    cin >> choice;
    switch (choice) {
      case 1:
        functionMain();
        break;
      case 2:
        passByMain();
        break;
      case 3:
        overloadMain();
        break;
    }
    cout << "Again?";
    string res;
    cin >> res;
    keepGoing = tolower(res[0]) == 'y';
  } while (keepGoing);
}

int passByValue(int arg) {
  arg = arg * 2;
  return arg;
}
int passByReference(int &arg) {
  arg = arg * 2;
  return arg;
}

int getInt(string msg) {
  int val = static_cast<int>(getDouble(msg));
  return val;
}

double getDouble(string msg) {
  double val;
  cout << msg << endl;
  cin >> val;
  return val;
}

int notCallableFromMain() { return 0; }