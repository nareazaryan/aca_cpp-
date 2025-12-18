#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Matrix.h"
#include "Pieces.h"

class ChessBoard : public Matrix<Piece*> {
public:
    ChessBoard() : Matrix<Piece*>(8) {}

    void setup() {
        setElement(0, 4, new King());
        setElement(0, 3, new Queen());

        setElement(0, 0, new Rook());
        setElement(0, 7, new Rook());

        setElement(0, 1, new Knight());
        setElement(0, 6, new Knight());

        setElement(0, 2, new Bishop());
        setElement(0, 5, new Bishop());

        for (int i = 0; i < 8; i++)
            setElement(1, i, new Pawn());
    }
};

#endif
