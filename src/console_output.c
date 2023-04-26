//
// Created by Geoff on 4/26/2023.
//

#include <stdio.h>
#include "../include/console_output.h"
#include "../include/chess_pieces.h"

void PrintBoard()
{
	printf("\n");
	for (int y = 8; y > 0; y--)
	{
		for (int x = 1; x < 9; x++)
		{
			if (x == 1)
			{
				printf("|");
			}
			printf(" %s |", GetPieceAtCoordinates(x, y)->name);
			if (x == 8)
			{
				printf("\n");
			}
		}
	}
}