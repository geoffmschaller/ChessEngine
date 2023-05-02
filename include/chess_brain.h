//
// Created by Geoff on 5/1/2023.
//

#ifndef CHESSENGINE_CHESS_BRAIN_H
#define CHESSENGINE_CHESS_BRAIN_H

#include "chess_pieces.h"
#include "chess_movement.h"

/*
 * Analyises all potential moves and ranks them based on value. The highest value is returned.
 */
CHESS_MOVE CalculateNextMove();

#endif //CHESSENGINE_CHESS_BRAIN_H
