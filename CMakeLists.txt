cmake_minimum_required(VERSION 3.25)
project(ChessEngine C)

set(CMAKE_C_STANDARD 23)

add_executable(ChessEngine src/main.c src/chess_pieces.c include/chess_pieces.h src/chess_movement.c include/chess_movement.h include/main.h)
