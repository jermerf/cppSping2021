#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void fileReader();
void fileReader2();
void fileWriter();
void formatWriter();
void fileReaderOrFail();
void fileWriterOrFail();

int main() {
  // fileReader();
  // fileReader2();
  // fileWriter();
  formatWriter();
  // fileReaderOrFail();
  // fileWriterOrFail();
}

void fileWriterOrFail() {
  ofstream fout;
  fout.open(
      "C:\\Users\\jermaine."
      "francoeur\\Courses\\CppSpring2021\\Notes\\fileout\\cppAllowed.txt",
      ios::app);
  if (fout.fail()) {
    cout << "Total failure, you are not worthy!!!";
    exit(1);
  } else {
    fout << endl << "I am lord of Windows!";
    fout.close();
  }
}

void fileReaderOrFail() {
  ifstream fin;
  fin.open("Idontexist.txt");
  if (fin.fail()) {
    cout << "File not found";
    exit(1);
  } else {
    string readIn;
    while (fin >> readIn) {
      cout << "_" << readIn << "_" << endl;
    }
  }
}

void formatWriter() {
  ofstream fout;
  fout.open("numbers.txt");
  for (int i = 7894576; i < 7894586; i++) {
    double num = i / 100000.0;
    fout.precision(7);
    fout.setf(ios::showpoint);
    fout << num << endl;
  }
  fout.close();
}

void fileReader() {
  ifstream fin;
  fin.open("ImportantFile.txt");
  string readIn;
  while (fin >> readIn) {
    cout << "_" << readIn << "_" << endl;
  }
}
void fileReader2() {
  ifstream fin;
  fin.open("ImportantFile.txt");
  string readIn;
  while (!fin.eof()) {
    fin >> readIn;
    cout << "_" << readIn << "_" << endl;
  }
}

void fileWriter() {
  ofstream fout;
  fout.open("ImportantFile.txt", ios::app);
  fout << endl << "587875fg8etheyje84hgjr5lerr5ryjr";
  fout.close();
}