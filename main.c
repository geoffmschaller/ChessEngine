#include <stdio.h>
#include <stdbool.h>

typedef struct
{
	char name[12];
} ChessPiece;

typedef struct
{
	int id;
	ChessPiece *piece;
} BoardSquare;

ChessPiece NullPiece = {"NULL"};
BoardSquare GameBoard[64] = {};

int
PopulateGameBoard()
{
	for (int board_index = 0; board_index < 64; board_index++)
	{
		GameBoard[board_index] = (BoardSquare) {board_index, &NullPiece};
	}
	return true;
}

int
main()
{
	bool game_running = true;
	PopulateGameBoard();
	for (int board_index = 0; board_index < 64; board_index++)
	{
		printf("%d - %s\n", GameBoard[board_index].id, GameBoard[board_index].piece->name);
	}
	while (game_running)
	{
		game_running = false;
	}
	return 0;
}
