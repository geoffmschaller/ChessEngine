#include <stdio.h>
#include <stdbool.h>

struct GamePiece
{
	char name[10];
	bool is_white;
};

struct BoardLocation
{
	int number;
	struct GamePiece *game_piece;
};

struct GamePiece Queen = {
		"Queen",
		true
};

struct BoardLocation GameBoard[16] = {
		{0, &Queen}
};

int
main()
{
	bool game_running = true;
	while (game_running)
	{
		game_running = false;
	}
	return 0;
}
