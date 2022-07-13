//write include statements
#include "hwexpressions.h"
#include "iostream"

//write namespace using statement for cout

using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

/*2) In the main function, write code to use the functions get_sales_tax_amount and get_tip_amount.
a) Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
b) Use the cin object to capture the number from the keyboard, assign the number to 
     meal_amount.
c) Call the get_sales_tax_amount with meal_amount as its parameter, 
     assign the return value of the function get_sales_tax_amount to the tax_amount variable. 
d) Capture the tip rate from keyboard and assign the value to tip_rate variable.
e) Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
     set function get_tip_amount return value to tip_amount.
f)  Add tip_amount, tax_amount and meal_amount , and save result to total variable.
g) Display a receipt (formatting the number decimal spaces is optional): 
     Meal Amount:           20
     Sales Tax:              1.35       
     Tip Amount:            3
     Total:                    24.35
	 */


int main()
{
	double meal_amount = 0;
	cout<<"Please enter the meal amount:";
	cin>>meal_amount;

	double tax_amount = get_sales_tax_amount(meal_amount);
	
	double tip_rate = 0;
	cout<<"Please enter the tip rate:";
	cin>>tip_rate;

	double tip_amount = get_tip_amount(meal_amount, tax_rate);

	double total = meal_amount + tax_amount + tip_rate + tip_amount;

	cout<<"\n"<<"Here is your receipt"<<"\n"<<"\n";
	cout<<"Meal Amount:  "<<meal_amount<<"\n";
	cout<<"Sales Tax:     "<<tax_amount<<"\n";
	cout<<"Tip Amount:    "<<tip_amount<<"\n";
	cout<<"Total:        "<<total<<"\n";
	cout<<"\n"<<"Thank you. Please come again"<<"\n"<<"\n";




	return 0;
}
