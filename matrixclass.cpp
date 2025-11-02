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
  Matrix operator*(int num) const;
  Matrix operator*(const Matrix &other) const;

  Matrix &operator++();
  Matrix operator++(int);
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

Matrix Matrix::operator*(int num) const {
  Matrix count(*this);
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
      count.data[i][j] = data[i][j] * num;
  return count;
}

Matrix Matrix::operator*(const Matrix &other) const {
  Matrix count(rows, other.cols);
  if (cols != other.rows) {
    cout << "Matrix size doesn't fit!" << endl;
    return count;
  }

  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < other.cols; ++j)
      for (int k = 0; k < cols; ++k)
        count.data[i][j] += data[i][k] * other.data[k][j];

  return count;
}

Matrix &Matrix::operator++() {
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
      ++data[i][j];
  return *this;
}

Matrix Matrix::operator++(int) {
  Matrix temp(*this);
  ++(*this);
  return temp;
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
