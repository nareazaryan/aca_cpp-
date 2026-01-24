#pragma once
#include <../Vector/Vector.hpp>
#include <initializer_list>


template <class T>
class Queue : private Vector<T> {
public:
    Queue() {}

    Queue(std::initializer_list<T> list) {
        for (auto x : list) {
            this->push_back(x);
        }
    }

    void push(T x) { this->push_back(x); }

    void pop() {
        if (this->empty()) return;

        for (int i = 0; i < this->size() - 1; i++) {
            (*this)[i] = (*this)[i + 1];
        }
        this->pop_back();
    }

    T& front() { return (*this)[0]; }

    int size() { return Vector<T>::size(); }

    bool empty() { return Vector<T>::empty(); }

    bool equals(Queue& other) {
        if (this->size() != other.size()) return false;

        for (int i = 0; i < this->size(); i++) {
            if ((*this)[i] != other[i]) return false;
        }
        return true;
    }

    void clear() { Vector<T>::clear(); }
};