//
// Created by Geoff on 4/25/2023.
//
#include "../include/chess_pieces.h"


ChessPiece *
GetPieceAtCoordinates(int x, int y)
{
	for (int piece_index = 1; piece_index < (sizeof ChessPieces / sizeof ChessPieces[0]); piece_index++)
	{
		if (ChessPieces[piece_index].x == x && ChessPieces[piece_index].y == y) return &ChessPieces[piece_index];
	}
	return &ChessPieces[0];
}

ChessPiece ChessPieces[33] = {
		{"  ", 0, 0, BLACK, PAWN},
		{"WP", 1, 2, WHITE, PAWN},
		{"WP", 2, 2, WHITE, PAWN},
		{"WP", 3, 2, WHITE, PAWN},
		{"WP", 4, 2, WHITE, PAWN},
		{"WP", 5, 2, WHITE, PAWN},
		{"WP", 6, 2, WHITE, PAWN},
		{"WP", 7, 2, WHITE, PAWN},
		{"WP", 8, 2, WHITE, PAWN},
		{"WR", 1, 1, WHITE, ROOK},
		{"WN", 2, 1, WHITE, KNIGHT},
		{"WB", 3, 1, WHITE, BISHOP},
		{"WQ", 4, 1, WHITE, QUEEN},
		{"WK", 5, 1, WHITE, KING},
		{"WB", 6, 1, WHITE, BISHOP},
		{"WN", 7, 1, WHITE, KNIGHT},
		{"WR", 8, 1, WHITE, ROOK},
		{"BP", 1, 7, BLACK, PAWN},
		{"BP", 2, 7, BLACK, PAWN},
		{"BP", 3, 7, BLACK, PAWN},
		{"BP", 4, 7, BLACK, PAWN},
		{"BP", 5, 7, BLACK, PAWN},
		{"BP", 6, 7, BLACK, PAWN},
		{"BP", 7, 7, BLACK, PAWN},
		{"BP", 8, 7, BLACK, PAWN},
		{"BR", 1, 8, BLACK, ROOK},
		{"BN", 2, 8, BLACK, KNIGHT},
		{"BB", 3, 8, BLACK, BISHOP},
		{"BQ", 4, 8, BLACK, QUEEN},
		{"BK", 5, 8, BLACK, KING},
		{"BB", 6, 8, BLACK, BISHOP},
		{"BN", 7, 8, BLACK, KNIGHT},
		{"BR", 8, 8, BLACK, ROOK}
};