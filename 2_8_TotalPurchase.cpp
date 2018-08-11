/*
	Author:		Mitchell Nix
	Date:		6/28/2018
	Prog:		2_8_TotalPurchase.cpp
	Descr:
		A customer in a store is purchasing five items. The pries of the five items are as follows:
		Price of item 1 = $15.95
		Price of item 2 = $24.95
		Price of item 3 = $6.95
		Price of item 4 = $12.95
		Price of item 5 = $3.95

		Write a program that holds the prices of the five items in five variables. Display each
		item's price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
		sales tax is 7 percent.

*/

#include <iostream>
using namespace std;

int main() {
	float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
	float salestax, subTotal, total, taxAmmount, taxRate = .07;

	subTotal = item1 + item2 + item3 + item4 + item5;
	taxAmmount = (taxRate * subTotal);
	total = taxAmmount + subTotal;

	cout << "The price of the items are as follows: " << endl << endl;
	cout << "Price of item 1 = $" << item1 << endl;
	cout << "Price of item 2 = $" << item2 << endl;
	cout << "Price of item 3 = $" << item3 << endl;
	cout << "Price of item 4 = $" << item4 << endl;
	cout << "Price of item 5 = $" << item5 << endl << endl;

	cout << "The tax ammount is $" << taxAmmount << endl;
	cout << "The subtotal is $" << subTotal << endl;
	cout << "The total is $" << total << endl;

	return 0;
}
