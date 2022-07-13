//write include statement for decisions header
#include"decisions.h"
#include<string> 
//Write code for function(s) code here

char get_grade_points (char letter_grade)
{
    int get_points = 0;
    if ( letter_grade == 'A')
    {
        get_points = 4;
    }
    else if ( letter_grade == 'B')
    {
        get_points = 3;
    }
    else if ( letter_grade == 'C')
    {
        get_points = 2;
    }
    else if ( letter_grade == 'D')
    {
        get_points = 1;
    }
    else if ( letter_grade == 'F')
    {
        get_points = 0;
    }
    else
    {
        std::string get_points ="Invalid";
    }

    return get_points;
}






double calculate_gpa (int credit_hours, double credit_points)
{
    return credit_points/credit_hours;
}