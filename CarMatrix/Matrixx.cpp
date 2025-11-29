#include "Matrixx.h"
#include "Car.h"
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

int Matrix::getCarCount() const { return Car::GetCount(); }

void Matrix::Initialize() {
  string names[] = {"BMW", "Toyota", "Audi", "Mercedes", "Nissan"};
  string models[] = {"X5", "Corolla", "A6", "C-Class", "Altima"};
  string colors[] = {"Black", "White", "Silver", "Blue", "Red"};
  string engines[] = {"Diesel", "Hybrid", "Petrol", "Electric", "Gas"};

  int index = 0;

  for (int i = 0; i < m_size; ++i) {
    for (int j = 0; j < m_size; ++j) {
      if (m_data[i][j] != nullptr) {
        delete m_data[i][j];
      }

      string name = names[index % 5];
      string model = models[index % 5];
      string color = colors[index % 5];
      string engine = engines[index % 5];
      int year = 2020 + (index % 5);

      m_data[i][j] = new Car(name, model, year, color, engine);

      index++;
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

void Matrix::pasteCar(const Car &c, int row, int col) {
  if (row < 0 || row >= m_size || col < 0 || col >= m_size) {
    cout << "Invalid position!" << endl;
    return;
  }

  if (m_data[row][col] != nullptr)
    delete m_data[row][col];

  m_data[row][col] = new Car(c);
}

void Matrix::Print() const {
  for (int i = 0; i < m_size; ++i) {
    for (int j = 0; j < m_size; ++j) {
      if (m_data[i][j] != nullptr) {
        cout << "Position [" << i << "][" << j << "]:" << endl;
        m_data[i][j]->DisplayInfo();
      } else {
        cout << "Position [" << i << "][" << j << "]: [ Empty ]" << endl;
      }
    }
  }
}