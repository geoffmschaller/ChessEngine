#include <stdbool.h>
#include <stdio.h>
#include "include/chess_pieces.h"
#include "include/chess_movement.h"

int
main()
{
	bool game_running = true;
	while (game_running)
	{
		ValidateAndMoveChessPiece(&ChessPieces[0], 0, 1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[0], 0, 1, VALIDATE_AND_MOVE);
		printf("Final Position: %s: %dx%d", ChessPieces[0].name, ChessPieces[0].x, ChessPieces[0].y);
		game_running = false;
	}
	return 0;
}
