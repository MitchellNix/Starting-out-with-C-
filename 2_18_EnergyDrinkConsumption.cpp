/*
	Author:		Mitchell Nix
	Date:		7/23/2018
	Prog:		2_18_EnergyDrinkConsumption.cpp
	Descr:
		A soft drink company recently surveyed 16,500 of its customers and found that
		approximately 15 percent of those surveryed purchase one of more energy rinks per week.
		of those cusomters who purchase energy drinkgs, approximately 58 percent of them prefer
		citrus-flavored energy drinks. Write a program that displys the following:

		The approximate number of customers in the survey who purchase one of more 
		energy drinks per week.
		The approximate number of customers in the survey who prefer citrus-flavored
		energy drinks.


*/

#include <iostream>
using namespace std;

int main() {
	int numCustomers = 16500,
		numBuyDrinks, numPreferCitrus;
	float pBuyDrinks = .15,
		pPreferCitrus = .58;

	numBuyDrinks = numCustomers * pBuyDrinks;
	numPreferCitrus = numBuyDrinks * pPreferCitrus;

	cout << "Of our " << numCustomers << " customers " << numBuyDrinks << endl;
	cout << "buy one or more drink per week " << endl;
	cout << "of those " << numPreferCitrus << " prefer citrus flavored drinks.";

	return 0;
}