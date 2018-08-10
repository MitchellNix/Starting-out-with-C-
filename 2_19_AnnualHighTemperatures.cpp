/*
	Author:		Mitchell Nix
	Date:		7/23/2018
	Progr:		2_19_AnnualHighTemperatures.cpp
	Descr:
		The average July high temperature is 85 degres Fahrenheit in New York City, 88 degrees
		Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that
		calculates and reports what the new average July temperature would be for each of
		these cities if temperatures rise by 2 percent.

*/

#include <iostream>
using namespace std;

int main() {
	int newYork = 85,
		denver = 88,
		phoenix = 106;
	float nNewYork,
		nDenver,
		nPhoenix;

	float rise = 1.02;

	nNewYork = newYork * rise;
	nPhoenix = phoenix * rise;
	nDenver = denver * rise;

	cout << "Here are the following average high temperatures for each city " << endl
		<< "If the temperatures go up 2%" << endl << endl;
	cout << "New York: " << nNewYork << endl;
	cout << "Denver: " << nDenver << endl;
	cout << "Phoenix: " << nPhoenix << endl;
		 
	return 0;
}