#include"tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	string winner;
	char user_choice = 'N';
	char user_input;
	do
	{
		
		cout<<"Enter X or O to start: ";
		cin>>user_input;
		while(user_input != 'X' && user_input !='O')
		{
			cout<<"ERROR ONLY X or O can be inputs! "<<"\n";
			cout<<"Enter X or O to start: ";
			cin>>user_input;
		}

		first_player = user_input;

		game.start_game(first_player);
		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position on the board 1 to 9: ";
			cin>>position;
			game.mark_board(position); 
			game.display_board();
			
		}
		winner = game.get_winner();
		cout<<"Game Over! The winner is: "<<winner<<"\n";

		cout<<"Would you like to play again? Y or N: ";
		cin>> user_choice;


	}while(user_choice == 'Y' || user_choice == 'y');
	return 0;
}