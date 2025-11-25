#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Matrix.h"

class Chessboard : public Matrix {
public:
    Chessboard(int size = 8);
    Chessboard(const Chessboard& other);

    Chessboard& operator=(const Chessboard& other);
    //added move constructor and operator=
    Chessboard(Chessboard&& other);
    Chessboard& operator=(Chessboard&& other);


    void initBoard();
    void printBoard() const;

    void setPlace(int row, int col, char piece);
    char getPiece(int row, int col) const;

    bool isEmpty(int row, int col) const;

    virtual ~Chessboard() = default;
};

#endif
