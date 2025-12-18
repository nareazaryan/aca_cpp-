#ifndef MATRIX_IMP_H
#define MATRIX_IMP_H


template <typename T>
Matrix<T>::Matrix(int size) : m_data(nullptr), m_size(size) {
    allocate_memory(size);
}

template <typename T>
Matrix<T>::Matrix(const Matrix& other)
    : m_data(nullptr), m_size(other.m_size)
{
    allocate_memory(m_size);
    // shallow copy (OK for your case)
    for (int i = 0; i < m_size; ++i)
        for (int j = 0; j < m_size; ++j)
            m_data[i][j] = other.m_data[i][j];
}

template <typename T>
Matrix<T>::Matrix(Matrix&& other) noexcept
    : m_data(other.m_data), m_size(other.m_size)
{
    other.m_data = nullptr;
    other.m_size = 0;
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix& other) {
    if (this != &other) {
        deallocate_memory();
        m_size = other.m_size;
        allocate_memory(m_size);

        for (int i = 0; i < m_size; ++i)
            for (int j = 0; j < m_size; ++j)
                m_data[i][j] = other.m_data[i][j];
    }
    return *this;
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(Matrix&& other) noexcept {
    if (this != &other) {
        deallocate_memory();
        m_data = other.m_data;
        m_size = other.m_size;

        other.m_data = nullptr;
        other.m_size = 0;
    }
    return *this;
}

template <typename T>
Matrix<T>::~Matrix() {
    deallocate_memory();
}

template <typename T>
void Matrix<T>::allocate_memory(int size) {
    m_data = new T*[size];
    for (int i = 0; i < size; ++i) {
        m_data[i] = new T[size];
        for (int j = 0; j < size; ++j)
            m_data[i][j] = nullptr;
    }
}

template <typename T>
void Matrix<T>::deallocate_memory() {
    if (!m_data) return;
    for (int i = 0; i < m_size; ++i)
        delete[] m_data[i];
    delete[] m_data;
}

template <typename T>
void Matrix<T>::setElement(int row, int col, T value) {
    m_data[row][col] = value;
}

template <typename T>
T Matrix<T>::getElement(int row, int col) const {
    return m_data[row][col];
}

#endif
