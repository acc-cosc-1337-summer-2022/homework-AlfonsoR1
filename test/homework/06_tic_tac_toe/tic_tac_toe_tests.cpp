#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include<memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std:: unique_ptr;
using std:: make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}
TEST_CASE("Test get X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player()=="X");
}
TEST_CASE("Test get O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
}
TEST_CASE("Test win by first column with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first column with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by second column with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second column with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by third column with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third column with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by first row with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first row with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by second row with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second row with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by third row with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win diagonally from top left  with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from top left with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win diagonally from bottom left with X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from bottom left with O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test if the board is full for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}
TEST_CASE("Test win by first column with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first column with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by second column with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second column with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by third column with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third column with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by forth column with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by forth column with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by first row with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first row with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by second row with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second row with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by third row with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win by forth row with X for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by forth row with O for 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win diagonally from top left with X of 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from top left with O of 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}
TEST_CASE("Test win diagonally from bottom left with X of 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from bottom left with O of 4") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}