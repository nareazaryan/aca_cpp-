#ifndef MATRIX_H
#define MATRIX_H
#include "Car.h"
#include <iostream>

class Matrix {
private:
  Car ***m_data;
  int m_size;

public:
  Matrix(int size);
  ~Matrix();
  Matrix(const Matrix &other);
  Matrix &operator=(const Matrix &other);


  int getCarCount() const;
  void Initialize();
  void Print() const;
  void pasteCar(const Car &c, int row, int col);
  
  friend std::ostream &operator<<(std::ostream &os, const Matrix &obj);
};

#endif