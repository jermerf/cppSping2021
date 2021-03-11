#include <iostream>

void showOutput(double);
void getInput(double &, double &, double &);

int main() {
  double s1, s2, s3;
  getInput(s1, s2, s3);
  showOutput(s1 + s2 + s3);
}

void showOutput(double perimeter) {
  using namespace std;
  cout.setf(ios::scientific);
  cout << "The perimeter of that triangle is " << perimeter;
}

void getInput(double &a, double &b, double &c) {
  using namespace std;
  cout << "Enter the lengths of three side to get the perimeter\n";
  cout << "Side A: ";
  cin >> a;
  cout << "Side B: ";
  cin >> b;
  cout << "Side C: ";
  cin >> c;
}