#include "Matrixx.h"
#include <iostream>

Matrix::Matrix(int size) : m_size(size) {
  m_data = new Car **[m_size];
  for (int i = 0; i < m_size; i++) {
    m_data[i] = new Car *[m_size];
    for (int j = 0; j < m_size; j++) {
      m_data[i][j] = nullptr;
    }
  }
}

Matrix::~Matrix() {
  for (int i = 0; i < m_size; i++) {
    for (int j = 0; j < m_size; j++)
      delete m_data[i][j];
    delete[] m_data[i];
  }
  delete[] m_data;
}

Matrix::Matrix(const Matrix &other) : m_size(other.m_size) {
  m_data = new Car **[m_size];
  for (int i = 0; i < m_size; i++) {
    m_data[i] = new Car *[m_size];
    for (int j = 0; j < m_size; j++) {
      if (other.m_data[i][j] != nullptr)
        m_data[i][j] = new Car(*other.m_data[i][j]);
      else
        m_data[i][j] = nullptr;
    }
  }
}

Matrix &Matrix::operator=(const Matrix &other) {
  if (this == &other)
    return *this;

  for (int i = 0; i < m_size; i++) {
    for (int j = 0; j < m_size; j++)
      delete m_data[i][j];
    delete[] m_data[i];
  }
  delete[] m_data;

  m_size = other.m_size;
  m_data = new Car **[m_size];
  for (int i = 0; i < m_size; i++) {
    m_data[i] = new Car *[m_size];
    for (int j = 0; j < m_size; j++) {
      if (other.m_data[i][j])
        m_data[i][j] = new Car(*other.m_data[i][j]);
      else
        m_data[i][j] = nullptr;
    }
  }
  return *this;
}

