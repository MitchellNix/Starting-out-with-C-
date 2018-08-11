/*
	Author:		Mitchell Nix
	Date:		7/16/2018
	Prog:		2_12_LandCalculation.cpp
	Descr:	
		One acre of land is equivalent to 43,560 square feet. Write a program that calculates
		the number of acres in a tract of land with 391,876 square feet.


*/

#include <iostream>
using namespace std;

int main() {
	float numAcres;
	int sqFtPerAcre = 43560,
		landSize = 391876;

	numAcres = static_cast<float>(landSize) / sqFtPerAcre;
	cout << "The number of acres on this plot of land is " << numAcres << endl;
}