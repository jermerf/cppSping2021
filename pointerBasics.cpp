
#include <iostream>
#include <string>
using namespace std;

int main() {
  bool *pTobool;
  double *pToDouble;
  string *pToString;

  int *p;
  int tmp = 0;
  int num = 42;
  p = &tmp;
  cout << "Num: " << num << endl;
  cout << "p: " << *p << endl;
  p = &num;
  cout << "Num: " << num << endl;
  cout << "p: " << *p << endl;
  *p = 99;
  cout << "Num: " << num << endl;
  cout << "p: " << *p << endl;
}