//
// Created by Geoff on 4/25/2023.
//

#ifndef CHESSENGINE_CHESS_PIECES_H
#define CHESSENGINE_CHESS_PIECES_H

typedef enum
{
	WHITE,
	BLACK
} PIECE_COLOR;

typedef enum
{
	PAWN,
	ROOK,
	KNIGHT,
	BISHOP,
	QUEEN,
	KING
} PIECE_TYPE;

typedef struct
{
	char name[12];
	int x;
	int y;
	PIECE_COLOR color;
	PIECE_TYPE type;
} ChessPiece;

static ChessPiece ChessPieces[3] = {
		{"PAWN A", 1, 1, WHITE, PAWN},
		{"PAWN B", 1, 3, WHITE, PAWN},
		{"PAWN C", 1, 5, BLACK, PAWN}
};

#endif //CHESSENGINE_CHESS_PIECES_H
