#include <windows.h>
#include <stdio.h>
#include "../include/chess_pieces.h"
#include "../include/chess_movement.h"
#include "../include/main.h"
#include "../include/console_output.h"

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
		ValidateAndMoveChessPiece(&ChessPieces[1], 0, 1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[1], 0, 1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[17], 0, -1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[17], 0, -1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[25], 0, -1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[25], 0, -1, VALIDATE_AND_MOVE);
		ValidateAndMoveChessPiece(&ChessPieces[25], 0, -1, VALIDATE_AND_MOVE);
		PrintBoard();
		game_mode = TERMINATING;
	}
	return 0;
}

