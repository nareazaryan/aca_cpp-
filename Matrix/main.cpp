#include "Matrix.h"
#include <iostream>
using namespace std;

int main() {
  // Matrix A(2, 4);

  // cout << "Enter a matrix:" << endl;
  // A.Input();

  // cout << endl << "Matrix A:" << endl;
  // A.Display();

  // A.SaveInFile("matrix_output.txt");

  Matrix B(3, 4);
  B.FillFromFile("integers.txt");
  B.Display();
}