//h

#include<string>
#include<vector>
#include<iostream>
#include<memory>
using std:: unique_ptr;
using std:: make_unique;
using std::cout; using std::cin; using std::string;


#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size):pegs(size*size, " " ){};
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    std::string get_winner()const{return winner;}
    virtual void display_board()= 0;
    
private:
    std::string player;
    std::string winner;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    void set_winner();
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win()= 0;
    virtual bool check_row_win()= 0;
    virtual bool check_diagonal_win()= 0;
};

#endif