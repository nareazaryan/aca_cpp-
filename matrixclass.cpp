#include <iostream>
using namespace std;

class Matrix {
private:
  int rows;
  int cols;
  int data[10][10];

public:
  Matrix(int r, int c);
  Matrix(const Matrix &other);
  Matrix &operator=(const Matrix &other);
  void Input();
  void Display() const;
};

Matrix::Matrix(int r, int c) {
  rows = r;
  cols = c;
}

Matrix::Matrix(const Matrix &other) {
  rows = other.rows;
  cols = other.cols;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      data[i][j] = other.data[i][j];
    }
  }
}

Matrix &Matrix::operator=(const Matrix &other) {
  if (this != &other) {
    rows = other.rows;
    cols = other.cols;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        data[i][j] = other.data[i][j];
      }
    }
  }
  return *this;
}

void Matrix::Input() {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "a[" << i << "][" << j << "]: ";
      cin >> data[i][j];
    }
  }
}

void Matrix::Display() const {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << data[i][j] << " ";
    }
    cout << endl;
  }
}

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
