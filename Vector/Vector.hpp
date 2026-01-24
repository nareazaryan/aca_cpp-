#pragma once

template <typename T> class Vector {
  T *data;
  unsigned size;
  unsigned capacity;

public:
  Vector() : data(0), size(0), capacity(0) {}

  ~Vector() { delete[] data; }

  Vector(const Vector &other) : size(other.size), capacity(other.capacity) {
    if (capacity == 0) {
      data = 0;
    } else {
      data = new T[capacity];
      for (unsigned i = 0; i < size; ++i)
        data[i] = other.data[i];
    }
  }

  Vector(Vector &&other)
      : data(other.data), size(other.size), capacity(other.capacity) {
    other.data = 0;
    other.size = 0;
    other.capacity = 0;
  }

  Vector &operator=(const Vector &other) {
    if (this != &other) {
      delete[] data;
      size = other.size;
      capacity = other.capacity;

      if (capacity == 0) {
        data = 0;
      } else {
        data = new T[capacity];
        for (unsigned i = 0; i < size; ++i)
          data[i] = other.data[i];
      }
    }
    return *this;
  }

  Vector &operator=(Vector &&other) {
    if (this != &other) {
      delete[] data;
      data = other.data;
      size = other.size;
      capacity = other.capacity;

      other.data = 0;
      other.size = 0;
      other.capacity = 0;
    }
    return *this;
  }

  unsigned get_size() const { return size; }

  void push_back(const T &value) {
    if (size == capacity) {
      unsigned new_capacity = (capacity == 0) ? 1 : capacity * 2;
      T *new_data = new T[new_capacity];

      for (unsigned i = 0; i < size; ++i)
        new_data[i] = data[i];

      delete[] data;
      data = new_data;
      capacity = new_capacity;
    }
    data[size++] = value;
  }

  T &operator[](unsigned index) { return data[index]; }

  const T &operator[](unsigned index) const { return data[index]; }
};
