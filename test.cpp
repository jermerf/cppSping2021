#include <iostream>
using namespace std;

int main() { cout << "Error ..." << max(20, 20, 30); }

double max(double n1, double n2, double n3) {
  cout << "my func";
  if (n1 > n2) {
    if (n1 > n3) return n1;
    return n3;
  } else {
    if (n2 > n3) return n2;
    return n3;
  }
}