//
// Created by Geoff on 5/1/2023.
//

#include <stdio.h>
#include "../include/game.h"
#include "../include/chess_brain.h"
#include "../include/chess_movement.h"

int PlayGame()
{
	GAME_MODE game_mode = RUNNING;
	TURN team_turn = COMPUTER_TURN;
	while (game_mode == RUNNING)
	{
		if (team_turn == USER_TURN)
		{
			printf("USER's TURN");
			// TODO: Get desired move
			// TODO: Validate the move
			// TODO: Move piece
			team_turn = COMPUTER_TURN;
		} else
		{
			printf("Computer's Turn");
			CHESS_MOVE next_move = CalculateNextMove();
			MovePieceToChessMove(next_move);
			team_turn = USER_TURN;
		}

		game_mode = TERMINATING;
	}
	return 0;
}