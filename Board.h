//
// Created by benrr on 1/25/2023.
//

#ifndef MATRIXCHESSENGINECODE_BOARD_H
#define MATRIXCHESSENGINECODE_BOARD_H
#include <string>
#include "Move.h"

using namespace std;

class Board {
public:
    int board[8][8];

public:
    explicit Board();
    explicit Board(int input[8][8]);

    void makeMove(int initial_pos_row, int initial_pos_col, int final_pos_row, int final_pos_col);
    void castle(int row_of_rook, int col_of_rook);
    int getPiece(int row, int col);
    string printBoard();
};


#endif //MATRIXCHESSENGINECODE_BOARD_H

// test comment
// test comment 2
