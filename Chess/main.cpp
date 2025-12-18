#include <iostream>
#include "ChessBoard.h"
#include "Matrix.h"
#include "Matrix_imp.h"


int main() {
    ChessBoard board;
    board.setup();
    std::cout << board;
    return 0;
}
