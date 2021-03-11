#include <iostream>

int globalNum = 42;

int main() {
  globalNum++;
  std::cout << globalNum << std::endl;
  if (globalNum > 10) {
    int localNum = 777;
    std::cout << localNum;
  }
  // std::cout << localNum; // error
  {
    using namespace std;
    int smallBlock = 99;
  }
}