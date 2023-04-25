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

ChessPiece NullPiece = {"Empty Square"};
BoardSquare GameBoard[64];

int
PopulateGameBoard()
{
	int x = 0;
	int y = 0;
	for (int board_index = 0; board_index < (sizeof GameBoard / sizeof GameBoard[0]); board_index++)
	{
		GameBoard[board_index] = (BoardSquare) {x + y, &NullPiece};
		x++;
		if (x >= 8)
		{
			x = 0;
			y += 10;
		}
	}
	return true;
}

int
main()
{
	bool game_running = true;
	PopulateGameBoard();
	for (int board_index = 0; board_index < 20; board_index++)
	{
		printf("%d - %d - %s\n", board_index, GameBoard[board_index].id, GameBoard[board_index].piece->name);
	}
	while (game_running)
	{
		game_running = false;
	}
	return 0;
}
