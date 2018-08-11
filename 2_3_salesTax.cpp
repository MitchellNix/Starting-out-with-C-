/*
	Author:		Mitchell Nix
	File:		2_3_SalesPrediction.cpp
	Descr:
			Ch: 2 # 3 programing challenge
			Write a program that will computer the total sales tax on 
			a $95 purchase. Assume the sales tax is 4 percent, and the county
			sales tax is 2 percent.
	
*/

#include <iostream>
using namespace std;

int main() {
	double totalCost;
	int cost = 95;
	float stateTax = .04, countyTax = .02;


	totalCost = (cost * stateTax) + (cost * countyTax) + cost;
	cout << "Your total cost is " << totalCost << endl;


	return 0;
}
