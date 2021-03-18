#include <iostream>
using namespace std;

void addOneByVal(int num) { num += 1; }
void addOneByRef(int &num) { num += 1; }

int main() {
  int n1 = 10;
  int n2 = 10;
  addOneByVal(n1);
  addOneByRef(n2);
  cout << "n1 is " << n1 << endl;
  cout << "n2 is " << n2 << endl;
}
