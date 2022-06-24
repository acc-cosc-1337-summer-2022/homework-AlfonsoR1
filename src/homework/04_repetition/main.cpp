//write include statements
#include"dna.h"
#include <iostream>
//write using statements
using std::cin;
using std::cout;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() 
{
	char option = 'N';
	do
	{
   	string user_decision;
	cout <<"------MAIN MENU------"<<"\n";
    cout << "Please enter 1 for Get GC Content"<<"\n";
    cout << "Please enter 2 for Get DNA Complement"<<"\n";
	cin>>user_decision;
	cout <<"You have entered:"<< user_decision<<"\n";

	string user_dna;
	cout<<"Please enter a dna string:"<<'\n';
	cin>>user_dna;
	cout <<"You have entered:"<< user_dna<<"\n";
	
	if (user_decision[0] == '1')
	{
		double GC = get_gc_content(user_dna);
		cout<<"The total amount of G and C is "<<GC<<"\n";
	}
	if (user_decision[0] == '2')
	{
		string reverse_opposite = get_dna_complement(user_dna);
		cout<<"You DNA compliment is "<<reverse_opposite<<"\n";
	}

	cout << "Do you want to continue Y or N"<<"\n";
	cin>>option;
	}
	while (option == 'Y' || option == 'y');

	return 0;
}
