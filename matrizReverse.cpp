#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string printer(int matrix[3][3]) {
  stringstream  toPrint;
  int outLength = sizeof(*matrix) / sizeof(int);
  int innerLength = sizeof(matrix[0]) / sizeof(int);

  for (int i = 0; i < outLength; i++) {

    for (int k = 0; k < innerLength; k++) {
      toPrint << " [" << to_string(matrix[i][k]) << "] ";
    }

    toPrint << "\n";
  }

  return toPrint.str();
}



int main() {
  int matrix[3][3] { 1,2,3,4,5,6,7,8,9 };
  string toPrint = printer(matrix);
  string* ptr = &toPrint;
  string &ref = toPrint;

  cout << "Memory: " << ptr <<  " | Value: " <<  *ptr << "\n";


  cout << toPrint;




  return 0;
}