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

bool
ValidateAndMoveChessPiece(
		ChessPiece *piece,
		int x_offset,
		int y_offset,
		MOVE_TYPE move_type
)
{
	int new_x = piece->x + x_offset;
	int new_y = piece->y + y_offset;
	printf("Validating %s at %dx%d\n", piece->name, new_x, new_y);
	COORDINATE_TYPE coord_type = GetCoordinateType(new_x, new_y, piece->color);
	switch (coord_type)
	{
		case OUT_OF_BOUNDS:
			printf("Move was out of bounds. INVALID.\n");
			return false;
		case SELF_OCCUPIED:
			printf("Self Occupied. INVALID.\n");
			return false;
		default:
			break;
	}
	if (move_type == VALIDATE_ONLY)
	{
		printf("Valid Move. VALIDATE ONLY\n");
		return true;
	}
	if (coord_type == OPPONENT_OCCUPIED)
	{
		ChessPiece *opponent = GetPieceAtCoordinates(new_x, new_y);
		opponent->x = 0;
		opponent->y = 0;
		printf("Opponent Was killed. VALID\n");
	}
	piece->x = new_x;
	piece->y = new_y;
	printf("Piece moved. VALID\n");
	return true;
}