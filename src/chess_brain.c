//
// Created by Geoff on 5/1/2023.
//

#include <stdio.h>
#include "../include/chess_brain.h"

CHESS_MOVE CalculateNextMove()
{

	CHESS_MOVE best_move = {};
	for (int piece_index = 0; piece_index < sizeof(ChessPieces) / sizeof(ChessPieces[0]); piece_index++)
	{
		/*
		 * TODO: Loop over all possible moves for each chess piece.
		 * TODO: Evaluate each move and give it a score.
		 * TODO: If the current score beats the 'best_score' overwrite the variable.
		 */

		if (ChessPieces[piece_index].type == PAWN)
		{
			ValidateToChessMove((CHESS_MOVE) {ChessPieces[piece_index], 0, -1});
		}
	}
	return best_move;

}