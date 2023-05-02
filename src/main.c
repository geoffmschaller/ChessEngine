//
// Created by Geoff on 4/25/2023.
//

#include <windows.h>
#include <stdio.h>
#include "../include/game.h"

int
WinMain(
		HINSTANCE Instance,
		HINSTANCE PreviousInstance,
		PSTR CommandLine,
		INT CommandShow
)
{
	printf("\n");
	PlayGame();
	return 0;
}

