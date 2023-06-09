//
// Created by Geoff on 4/25/2023.
//

#ifndef CHESSENGINE_CHESS_MOVEMENT_H
#define CHESSENGINE_CHESS_MOVEMENT_H

#include <stdbool.h>
#include "../include/chess_pieces.h"

/*
 * Type of Validation done on coordinates. VALIDATE_ONLY validates and returns. VALIDATE_AND_MOVE validates and then
 * moves the piece.
 */
typedef enum
{
	VALIDATE_ONLY,
	VALIDATE_AND_MOVE
} MOVE_TYPE;

typedef struct
{
	ChessPiece piece;
	int destination_x;
	int destination_y;
	int value;
} CHESS_MOVE;

/*
 * Type return from a coordinate validation. Informs about the square at a given coordinates.
 */
typedef enum
{
	EMPTY_SPACE,
	OPPONENT_OCCUPIED,
	SELF_OCCUPIED,
	OUT_OF_BOUNDS
} COORDINATE_TYPE;

/*
 * Either validates a potential move, or validates then moves the piece.
 */
int
ValidateToChessMove(
		CHESS_MOVE chess_move
);

bool
MovePieceToChessMove(CHESS_MOVE chess_move);

#endif //CHESSENGINE_CHESS_MOVEMENT_H
