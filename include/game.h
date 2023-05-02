//
// Created by Geoff on 5/1/2023.
//

#ifndef CHESSENGINE_GAME_H
#define CHESSENGINE_GAME_H

/*
 * Used to notify system of game state.
 */
typedef enum
{
	RUNNING,
	TERMINATING,
} GAME_MODE;

typedef enum
{
	USER_TURN,
	COMPUTER_TURN
} TURN;

int PlayGame();

#endif //CHESSENGINE_GAME_H
