#include "expressions.h"
#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

//b) In file hwexpressions.cpp  write function code, multiply tax_rate and meal_amount and return their
//                  product.
// Declare a const double tax_rate variable with value 6.75%
//d) In file hwexpressions.cpp, write function code to multiply  meal_amount and tip_rate, return their product.

double get_sales_tax_amount(double meal_amount)
{
	const double tax_rate = .0675;
	auto tax_amount = meal_amount * tax_rate;
	return tax_amount;
}

double get_tip_amount(double meal_amount,double tip_rate)
{
	auto tip = meal_amount * tip_rate;
	return tip;
}
