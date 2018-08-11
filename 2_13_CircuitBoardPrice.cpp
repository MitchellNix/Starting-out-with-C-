/*
	Author:		Mitchell Nix
	Date:		7/16/2018
	Prog:		2_13_CircuitBoardPrice.cpp
	Descr:
		An electronics company sells circuit boards at a 35 percent profit. Write a program
		that will calculate the selling price of a circuit board that costs $14.95. Display the 
		result on the screen.

*/

#include <iostream>
using namespace std;

int main() {
	float salePrice,
		purchasePrice = 14.95,
		profit = .3;

	salePrice = (purchasePrice * profit) + purchasePrice;
	cout << "The sale price is " << salePrice << endl;

	return 0;
}