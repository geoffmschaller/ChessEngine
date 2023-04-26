//
// Created by Geoff on 4/25/2023.
//

#ifndef CHESSENGINE_CHESS_PIECES_H
#define CHESSENGINE_CHESS_PIECES_H

/*
 * Colors of the Pieces; BLACK or WHITE
 */
typedef enum
{
	WHITE,
	BLACK
} PIECE_COLOR;

/*
 * Types of pieces on the board.
 */
typedef enum
{
	PAWN,
	ROOK,
	KNIGHT,
	BISHOP,
	QUEEN,
	KING
} PIECE_TYPE;

/*
 * An individual piece that tracks name, location, color, and type.
 */
typedef struct
{
	char name[12];
	int x;
	int y;
	PIECE_COLOR color;
	PIECE_TYPE type;
} ChessPiece;

/*
 * Array of pieces on the board.
 */
static ChessPiece ChessPieces[3] = {
		{"PAWN A", 1, 1, WHITE, PAWN},
		{"PAWN B", 1, 3, WHITE, PAWN},
		{"PAWN C", 1, 5, BLACK, PAWN}
};

#endif //CHESSENGINE_CHESS_PIECES_H
