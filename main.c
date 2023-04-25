#include <stdio.h>
#include <stdbool.h>

int
main()
{
	bool game_running = true;
	int GameBoard[64] = {1, 2, 3, 4, 5, 6, 7, 8, 11, 12, 13, 14, 15, 16, 17, 18};
	printf("%d", GameBoard[2]);
	while (game_running)
	{
		game_running = false;
	}
	return 0;
}
