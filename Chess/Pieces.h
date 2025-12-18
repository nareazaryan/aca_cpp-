#ifndef PIECES_H
#define PIECES_H

#include "Piece.h"

class King : public Piece {
public: char getSymbol() const override { return 'K'; }
};

class Queen : public Piece {
public: char getSymbol() const override { return 'Q'; }
};

class Rook : public Piece {
public: char getSymbol() const override { return 'R'; }
};

class Bishop : public Piece {
public: char getSymbol() const override { return 'B'; }
};

class Knight : public Piece {
public: char getSymbol() const override { return 'N'; }
};

class Pawn : public Piece {
public: char getSymbol() const override { return 'P'; }
};

#endif
