//write include statements
#include "decisions.h"
#include <iostream>

using std::cin;
using std::cout;


int main() 
{
	char letter_grade;
	auto choice = 'n';
	auto credit_point = 0;
	auto credit_hours = 0;

	cout<<"Do you want to continue? y or n:";
	cin>>choice;

	while (choice != 0 ))
	{
	//cout<<"Enter the credit hour:";
	//cin>>credit_hours;
	credit_point = get_grade_points(letter_grade);
	cout<<"Enter letter grade:";
	cin>>letter_grade;
	credit_point =+ credit_point;
	cout<<credit_point<<"\n";
	}






	return 0;
}