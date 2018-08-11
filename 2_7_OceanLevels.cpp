/*
	Author:		Mitchell Nix
	Date:		6/28/2018
	Prog:		2_7_OceanLevels.cpp
	Descr:
		Assuming the ocean's level is currently rising at about 1.5 milimeters per year, write
		a program that displays:
	
	The number of millimeters higher than the current level that the ocean's level will
	be in 5 years

	The nuber of millimeters higher than the current level that hte ocean's level will
	be in 7 years.

	The number of millimeters higher than the current level that the ocean's level will
	be in 10 years.

*/

#include <iostream>
using namespace std;

int main() {

	float rateOfRise = 1.5;

	cout << "The ocean is rising at a rate of 1.5 milimeters per year " << endl;
	cout << "In  5 years the ocean will be " << (rateOfRise * 5) << "  milimeters higher " << endl;
	cout << "In  7 years the ocean will be " << (rateOfRise * 7) << " milimeters higher " << endl;
	cout << "In 10 years the ocean will be " << (rateOfRise * 10) << "   milimeters higher " << endl;


	return 0;
}