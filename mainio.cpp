#include <iostream>
using namespace std;

void checkAge() {
  int myAge;
  cout << "myAge default value is: " << myAge;
  cout << "How old are you?\n";
  cin >> myAge;
  if (myAge > 32) {
    cout << "You are older than me";
  } else if (myAge < 32) {
    cout << "You are younger than me";
  } else {
    cout << "You are the same age as me. Year of the dragon!";
  }
}

void getChar() {
  char c;
  cout << "char default value is: " << c << '\n';
  cout << "Enter a character\n";
  cin >> c;
  cout << c << ' ' << c << '\n';
  cout << ' ' << c << '\n';
  cout << c << ' ' << c << '\n';
}

void doIntAndFloatMath() {
  /* Given 1.5 * (11 / 2)

            11 / 2 = 5.5
          1.5 * 5.5 = 8.25
  */
  double a = 1.5 * (11 / 2);
  cout << "A is " << a << '\n';  // Outputs 7.5
  /* What happened? Integer vs Floating-point Arithmetic

    Integer Arithmetic
    11 / 2 = 5, in that the WHOLE NUMBER 2 goes into 11, 5 times

    Floating-Point Arithmetic
    11 / 2 = 5.5

    Because the code does arithmetic based on the value types used

    11  Integer
    2   Integer
    1.5 Float/Double

    (11 / 2) = (Integer / Integer) = Integer Arithmetic
    * 1.5                          = Floating-Point Arithmetic

    So then why 7.5?
    Because the brackets are processed first
      1.5 * (11 / 2)    = Float * (Integer / Integer)
      1.5 * (5)         = Float * (Integer)
      1.5 * 5           = Float * Integer
      7.5               = Float

    Floating point values take precedence over Integer values
      Float * Integer = Float
      Integer * Float = Float
  */

  // And order matters
  double b = 1.5 * 11 / 2;
  cout << "B is " << b << '\n';  // Outputs 8.25
  /*  1.5 * 11 / 2    = Float * Integer / Integer
      16.5 / 2        = Float / Integer
      8.25            = Float                     */

  double c = 11 / 2 * 1.5;
  cout << "C is " << c << '\n';  // Outputs 7.5
  /*  11 / 2 * 1.5    = Integer / Integer * Float
      5 * 1.5         = Integer * Float
      7.5             = Float                     */
}

int main() {
  int choice;

  cout << "1) checkAge\n";
  cout << "2) getChar\n";
  cout << "3) doIntAndFloatMath\n";
  cin >> choice;

  switch (choice) {
    case 1:
      checkAge();
      break;
    case 2:
      getChar();
      break;
    case 3:
      doIntAndFloatMath();
      break;
  }
  return 0;
}
