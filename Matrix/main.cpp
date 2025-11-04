#include <iostream>
#include "Matrix.h"
using namespace std;


int main() {
  Matrix A(2, 2), B(2, 2);

  cout << "Enter first matrix:" << endl;
  A.Input();

  cout << endl << "Enter second matrix:" << endl;
  B.Input();

  cout << endl << "Matrix A:" << endl;
  A.Display();

  cout << endl << "Matrix B:" << endl;
  B.Display();
}