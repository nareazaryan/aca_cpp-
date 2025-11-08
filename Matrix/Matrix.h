#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
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
  friend ostream &operator<<(ostream &out, const Matrix &obj);

  void Input();
  void Display() const;
  void SaveInFile(const string &file_name) const;

};


#endif