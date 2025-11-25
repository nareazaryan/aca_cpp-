#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
protected:
  char **m_data;
  int m_size;

public:
  Matrix(int size);
  Matrix(const Matrix &other);
  virtual ~Matrix();

  Matrix &operator=(const Matrix &other);

  Matrix(Matrix &&other);
  Matrix &operator=(Matrix &&other);

  void pasteValue(char value, int row, int col);
  char getElement(int row, int col) const;
  void setElement(int row, int col, char value);

  int getSize() const;

  friend std::ostream &operator<<(std::ostream &os, const Matrix &obj);
};

#endif
