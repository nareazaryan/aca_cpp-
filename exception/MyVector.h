#pragma once
#include <vector>
#include <iostream>
#include "MyException.h"

class MyVector {
private:
    std::vector<int> data;

public:
    MyVector() = default;

    void addElement(int value) {
        if (value < 0) {
            throw MyException("Error: Negative values are not allowed!");
        }
        data.push_back(value);
    }

    int getElement(size_t index) const {
        if (index >= data.size()) {
            throw MyException("Error: Index out of bounds!");
        }
        return data[index];
    }

    void removeElement(size_t index) {
        if (index >= data.size()) {
            throw MyException("Error: Cannot remove - index out of bounds!");
        }
        data.erase(data.begin() + index);
    }

    size_t getSize() const {
        return data.size();
    }

    void printAll() const {
        std::cout << "Vector contents: ";
        for (int val : data) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
};