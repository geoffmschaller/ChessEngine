cmake_minimum_required(VERSION 3.25)
project(ChessEngine C)

set(CMAKE_C_STANDARD 23)

add_executable(ChessEngine src/main.c src/chess_pieces.c include/chess_pieces.h src/chess_movement.c include/chess_movement.h include/main.h src/console_output.c include/console_output.h src/game.c include/game.h src/chess_brain.c include/chess_brain.h)
