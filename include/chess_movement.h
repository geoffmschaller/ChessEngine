//
// Created by Geoff on 4/25/2023.
//

#ifndef CHESSENGINE_CHESS_MOVEMENT_H
#define CHESSENGINE_CHESS_MOVEMENT_H

#include "../include/chess_pieces.h"

typedef enum
{
	VALIDATE_ONLY,
	VALIDATE_AND_MOVE
} MOVE_TYPE;

typedef enum
{
	EMPTY_SPACE,
	OPPONENT_OCCUPIED,
	SELF_OCCUPIED,
	OUT_OF_BOUNDS
} COORDINATE_TYPE;

bool
ValidateAndMoveChessPiece(
		ChessPiece *piece,
		int x,
		int y,
		MOVE_TYPE move_type
);

#endif //CHESSENGINE_CHESS_MOVEMENT_H
