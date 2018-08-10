/*
	Author:		Mitchell Nix
	Date:		6/28/2018
	Prog:		2_4_RestaurauntBill
	Descr:
		Write a program that computers the tax and tip on a restaurant bill for a patron with
		a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
		be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
		amount, and total bill on the screen.
*/

#include <iostream>
using namespace std;

int main() {
	double mealCost = 88.67, tipRate = .2, totalCost;
	float taxAmount, tipAmount, taxRate = .0675;

	tipAmount = mealCost * tipRate;
	taxAmount = (mealCost) * taxRate;
	totalCost = mealCost + tipAmount + taxAmount;

	cout << "The cost of the meal is: " << mealCost << endl;
	cout << "The tip amount is: " << tipAmount << endl;
	cout << "The tax amount is: " << taxAmount << endl;
	cout << "The total cost is: " << totalCost << endl;
}