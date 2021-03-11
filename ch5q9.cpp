#include <cmath>
#include <iostream>

void getInput(double &a, double &b, double &c) {
  using namespace std;
  cout << "Enter the three side of the triangle\n";
  cout << "Side A: ";
  cin >> a;
  cout << "Side B: ";
  cin >> b;
  cout << "Side C: ";
  cin >> c;
}

void perimeter(double a, double b, double c) {
  using namespace std;
  cout << "The perimeter is " << a + b + c << endl;
}

void area(double a, double b, double c) {
  using namespace std;
  double s = (a + b + c) / 2;
  double area = sqrt(s * (s - a) * (s - b) * (s - c));
  cout << "The area of the triangle is " << area << endl;
}

int main() {
  double a, b, c;
  getInput(a, b, c);
  perimeter(a, b, c);
  area(a, b, c);
}