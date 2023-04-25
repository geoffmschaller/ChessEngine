#include <stdio.h>
#include <stdbool.h>

typedef enum
{
	WHITE,
	BLACK
} Color;

typedef struct
{
	char name[12];
	Color color;
} ChessPiece;

typedef struct
{
	int x;
	int y;
	ChessPiece *piece;
} BoardSquare;

ChessPiece NullPiece = {"Empty Square", BLACK};
BoardSquare GameBoard[64];

int
PopulateGameBoard()
{
	int x = 0;
	int y = 0;
	for (int board_index = 0; board_index < (sizeof GameBoard / sizeof GameBoard[0]); board_index++)
	{
		GameBoard[board_index] = (BoardSquare) {x, y, &NullPiece};
		x++;
		if (x >= 8)
		{
			x = 0;
			y += 1;
		}
	}
	return true;
}

bool
VerifyBoardPiece(
		int x,
		int y
)
{
	return (x < 0 || x > 7 || y > 8 || y < 0);
}

int
main()
{
	bool game_running = true;
	PopulateGameBoard();
	while (game_running)
	{
		game_running = false;
	}
	return 0;
}
