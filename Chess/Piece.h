#ifndef PIECE_H
#define PIECE_H

class Piece {
public:
    virtual char getSymbol() const = 0;
    virtual ~Piece() {}
};

#endif
