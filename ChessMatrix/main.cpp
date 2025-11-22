#include <iostream>
#include "Chess.h"

int main() {
    Chessboard board(8);

    board.initBoard();
    board.printBoard();

    return 0;
}
