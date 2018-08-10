/*
	Author:		Mitchell Nix
	Program:		SalesPrediction.cpp
	Descr:
		The east Coast sales division of a company generates 58 percent of total
		sales. Based on that percentage, write a program that will predict how much
		the East Cost division will generate if the company has $8.6 million in sales 
		this year.
*/

#include <iostream>
using namespace std;


int main() {
	const double SALES_PERCENT = .58;
	const double COMPANY_SALES = 8.6;
	long double eastCoastSales;

	eastCoastSales = SALES_PERCENT * COMPANY_SALES;

	cout << "Based off the sales percent of " << SALES_PERCENT * 100 <<
		"$ and the yearly company sales of $" << COMPANY_SALES << " million" << endl;
	cout << "The East Cost division is estimated to generate $" << eastCoastSales
		<< " million" << endl;



	return EXIT_SUCCESS;
}