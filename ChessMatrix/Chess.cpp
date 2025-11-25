#include <iostream>
#include "Chess.h"
using namespace std;

Chessboard::Chessboard(int size)
    : Matrix(size) {}

Chessboard::Chessboard(const Chessboard& other)
    : Matrix(other) {}



Chessboard::Chessboard(Chessboard&& other)
    : Matrix(move(other))
{
    cout << "Chessboard move constructor" <<endl;
}

Chessboard& Chessboard::operator=(Chessboard&& other) {
    if (this != &other) {
        Matrix::operator=(move(other));
    }
    return *this;
}

void Chessboard::initBoard() {
    const char* initial[8] = {
        "........",
        "........",
        "........",
        "........"
    };

    for (int i = 0; i < getSize(); ++i) {
        for (int j = 0; j < getSize(); ++j) {
            setElement(i, j, initial[i][j]);
        }
    }
}

void Chessboard::printBoard() const {
    for (int i = 0; i < getSize(); ++i) {
        for (int j = 0; j < getSize(); ++j) {
            std::cout << getPiece(i, j) << " ";
        }
        std::cout << '\n';
    }
}

char Chessboard::getPiece(int row, int col) const {
    return getElement(row, col);
}

void Chessboard::setPlace(int row, int col, char piece) {
    setElement(row, col, piece);
}

bool Chessboard::isEmpty(int row, int col) const {
    return getElement(row, col) == '.';
}
