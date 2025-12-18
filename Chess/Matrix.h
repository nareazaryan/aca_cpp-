#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Matrix {
protected:
    T** m_data;
    int m_size;

public:
    explicit Matrix(int size = 0);
    Matrix(const Matrix& other);
    Matrix(Matrix&& other) noexcept;

    Matrix& operator=(const Matrix& other);
    Matrix& operator=(Matrix&& other) noexcept;

    virtual ~Matrix();

    void setElement(int row, int col, T value);
    T getElement(int row, int col) const;

    int getSize() const { return m_size; }

    friend std::ostream& operator<<(std::ostream& os, const Matrix<T>& obj) {
        for (int i = 0; i < obj.m_size; ++i) {
            for (int j = 0; j < obj.m_size; ++j) {
                if (obj.m_data[i][j])
                    os << obj.m_data[i][j]->getSymbol() << " ";
                else
                    os << ". ";
            }
            os << "\n";
        }
        return os;
    }

protected:
    void allocate_memory(int size);
    void deallocate_memory();
};

#include "Matrix_imp.h"

#endif
