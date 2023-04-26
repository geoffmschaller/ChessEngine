#include <windows.h>
#include <stdio.h>
#include "../include/chess_pieces.h"
#include "../include/chess_movement.h"
#include "../include/main.h"

int
WinMain(
		HINSTANCE Instance,
		HINSTANCE PreviousInstance,
		PSTR CommandLine,
		INT CommandShow
)
{
	GAME_MODE game_mode = RUNNING;
	printf("\n");
	while (game_mode != TERMINATING)
	{
		ValidateAndMoveChessPiece(&ChessPieces[0], 0, 1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[0], 0, 1, VALIDATE_AND_MOVE);
		printf("Final Position: %s: %dx%d", ChessPieces[0].name, ChessPieces[0].x, ChessPieces[0].y);
		game_mode = TERMINATING;
	}
	return 0;
}

