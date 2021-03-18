#include <iostream>
#include <string>
using namespace std;

struct CatStruct {
  int age = 0;
  string name = "Default Cat Struct";
  double fluffFactor = 10;
};
void catFight(CatStruct, CatStruct);

struct HouseStruct {
  int streetNumber;
  string streetName;
  CatStruct cat;
};

int main() {
  CatStruct tesla = {7, "Tesla", 42.654};
  CatStruct edison = {4, "Edison", 465000.654};
  catFight(tesla, edison);
  HouseStruct myHouse = {123, "Fakeway Rd.", tesla};
  cout << "I live at " << myHouse.streetNumber << " " << myHouse.streetName
       << " and my cat's name is " << myHouse.cat.name;
}

void catFight(CatStruct c1, CatStruct c2) {
  CatStruct winner;
  if (c1.age > c2.age) {
    winner = c1;
  } else {
    winner = c2;
  }
  cout << "The winner between " << c1.name << " and " << c2.name << " is "
       << winner.name << " by a hair";
}