#pragma once
#include "../vector/vec/vector.hpp"
#include <initializer_list>
#include <iostream>

template <typename T> class Stack : private Vector<T> {
public:
  Stack() : Vector<T>() {}
  Stack(std::initializer_list<T> list) {
    for (const T &item : list) {
      this->push_back(item);
    }
  }

  void push(const T &value) { this->push_back(value); }

  void pop() {
    if (!this->empty()) {
      this->pop_back();
    } else {
      std::cout << "Stack is empty!\n";
    }
  }

  T top() const {
    if (!this->empty()) {
        return (*this)[this->get_size() - 1];
    } else {
        std::cout << "Stack is empty!\n";
        return T();
    }
}

  bool isEmpty() const { return this->empty(); }

  unsigned size() const { return this->get_size(); }
};
