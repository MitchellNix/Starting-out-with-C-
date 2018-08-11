/*
	Author:		Mitchell Nix
	Date:		7/12/2018
	Prog:		2_10_MilesPerGallon.cpp
	Descr:
		A car holds 15 gallons of gasoline adn can travel 375 miles before refueling. Write a
		program that calculates the number of miles per gallon the car gets. Display the result
		on the screen.

		Hint: Use the following formula to calculate miles per gallon (MPG):
				MPG = Miles Driven/Gallons of Gas used

*/

#include <iostream>
using namespace std;

int main() {
	float mpg = static_cast<float>(375) / 15;

	cout << "Your car holds 15 gallons of gas. " << endl;
	cout << "You can drive 375 miles before refueling. " << endl;
	cout << "This means your car gets " << mpg << " MPG." << endl;

	return 0;
}