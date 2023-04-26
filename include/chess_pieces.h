//
// Created by Geoff on 4/25/2023.
//

#ifndef CHESSENGINE_CHESS_PIECES_H
#define CHESSENGINE_CHESS_PIECES_H

typedef enum
{
	WHITE,
	BLACK
} Color;

typedef struct
{
	char name[12];
	int x;
	int y;
	Color color;
} ChessPiece;

static ChessPiece ChessPieces[3] = {
		{"PAWN A", 1, 1, WHITE},
		{"PAWN B", 1, 3, WHITE},
		{"PAWN C", 1, 5, BLACK}
};

#endif //CHESSENGINE_CHESS_PIECES_H
