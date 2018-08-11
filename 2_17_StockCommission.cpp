/*
	Author:		Mitchell Nix
	Date:		7/23/2018
	Progr:		2_17_StockCommission.cp
	Descr:
		Kathyryn bought 750 shares of stock at a pric eof $35.00 per share. She must pay her
		stockbroker a 2 percent commission for the transaction. Write a program that calculats
		and displays the following:
			The ammount paid fo the stock alone (without commission).
			The amount of the commission.
			The total amount paid (for the stock plus the commission).

*/

#include <iostream>
using namespace std;

int main() {
	const float COM_P = .02;
	float numShares = 750,
		sharePrice = 35.0,
		commission, 
		total, sPrice;

	commission = sharePrice * numShares * COM_P;
	sPrice = sharePrice * numShares;
	total = commission + sPrice;

	cout << numShares << " shares were bought at $" << sharePrice << endl;
	cout << "The comission rate is " << COM_P * 100 << " percent" << endl;
	cout << endl;
	cout << "Stock cost: $" << sPrice << endl;
	cout << "Commisison Paid: $" << commission << endl;
	cout << "Total: $" << total;


	return 0;
}