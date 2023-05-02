//
// Created by Geoff on 4/25/2023.
//

#include <stdio.h>
#include <stdbool.h>
#include "../include/chess_movement.h"

COORDINATE_TYPE
GetCoordinateType(
		int x,
		int y,
		PIECE_COLOR color
)
{
	if (x < 1 || x > 8 || y < 1 || y > 8) return OUT_OF_BOUNDS;
	for (int piece_index = 0; piece_index < (sizeof ChessPieces / sizeof ChessPieces[0]); piece_index++)
	{
		if (ChessPieces[piece_index].x == x && ChessPieces[piece_index].y == y)
		{
			if (ChessPieces[piece_index].color == color)
			{
				return SELF_OCCUPIED;
			}
			return OPPONENT_OCCUPIED;
		}
	}
	return EMPTY_SPACE;
}

int
ValidateToChessMove(
		CHESS_MOVE chess_move
)
{

	return -1;
}

bool
MovePieceToChessMove(CHESS_MOVE chess_move)
{
	return true;
}