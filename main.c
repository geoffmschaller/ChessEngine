#include <stdio.h>
#include <stdbool.h>

typedef enum
{
	WHITE,
	BLACK
} Color;

typedef struct
{
	int x;
	int y;
} ChessMove;

typedef struct
{
	char name[12];
	int x;
	int y;
	Color color;
	ChessMove moves[10];
} ChessPiece;

ChessPiece ChessPieces[3];

void
PopulatePieces()
{
	ChessPieces[0] = (ChessPiece) {"PAWN A", 1, 1, WHITE, {0, 1}};
	ChessPieces[1] = (ChessPiece) {"PAWN B", 1, 3, BLACK, {0, 1}};
	ChessPieces[2] = (ChessPiece) {"PAWN A", 1, 5, WHITE, {0, 1}};
}

bool
ValidateSquare(
		int x,
		int y,
		Color color
)
{
	if (x < 1 || x > 8 || y < 1 || y > 8) return false;
	for (int piece_index = 0; piece_index < (sizeof ChessPieces / sizeof ChessPieces[0]); piece_index++)
	{
		if (ChessPieces[piece_index].x == x && ChessPieces[piece_index].y == y &&
		    ChessPieces[piece_index].color == color)
		{
			return false;
		}
	}
	return true;
}

bool
ValidateChessMove(
		ChessPiece *piece,
		int move_index
)
{
	// TODO: Black needs to be inverted.
	int new_x = piece->x + piece->moves[move_index].x;
	int new_y = piece->y + piece->moves[move_index].y;
	if (!ValidateSquare(new_x, new_y, piece->color))
	{
		printf("Evaluating %s to %d %d - INVALID MOVE\n", piece->name, new_x, new_y);
		return false;
	}
	printf("Evaluating %s to %d %d - OK\n", piece->name, new_x, new_y);
	return true;
}

bool
MoveChessPiece(
		ChessPiece *piece,
		int move_index
)
{
	int new_x = piece->x + piece->moves[move_index].x;
	int new_y = piece->y + piece->moves[move_index].y;
	printf("Moving %s to %d %d\n", piece->name, new_x, new_y);
	for (int piece_index = 0; piece_index < (sizeof ChessPieces / sizeof ChessPieces[0]); piece_index++)
	{
		if (ChessPieces[piece_index].x == new_x && ChessPieces[piece_index].y == new_y &&
		    ChessPieces[piece_index].color != piece->color)
		{
			printf("Killed an Opponent!\n");
			ChessPieces[piece_index].x = 0;
			ChessPieces[piece_index].y = 0;
		}
	}
	piece->x = new_x;
	piece->y = new_y;
	return true;
}

int
main()
{
	PopulatePieces();
	bool game_running = true;
	while (game_running)
	{
		bool move1_validation = ValidateChessMove(&ChessPieces[0], 0);
		if (move1_validation) MoveChessPiece(&ChessPieces[0], 0);
		bool move2_validation = ValidateChessMove(&ChessPieces[0], 0);
		if (move2_validation) MoveChessPiece(&ChessPieces[0], 0);
		bool move3_validation = ValidateChessMove(&ChessPieces[0], 0);
		if (move3_validation) MoveChessPiece(&ChessPieces[0], 0);
		bool move4_validation = ValidateChessMove(&ChessPieces[0], 0);
		if (move4_validation) MoveChessPiece(&ChessPieces[0], 0);
		game_running = false;
	}
	return 0;
}
