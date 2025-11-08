#include "Matrix.h"
#include <fstream>

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

ostream &operator<<(ostream &os, const Matrix &obj) {
  for (int i = 0; i < obj.rows; ++i) {
    for (int j = 0; j < obj.cols; ++j) {
      os << obj.data[i][j];
      if (j < obj.cols - 1)
        os << " ";
    }
    os << endl;
  }
  return os;
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

void Matrix::SaveInFile(const string &file_name) const {
  ofstream outFile(file_name);
  outFile << "Matrix (" << rows << "x" << cols << "):" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j)
      outFile << data[i][j] << " ";
    outFile << endl;
  }

  outFile.close();
  cout << "Matrix successfully saved" << endl;
}