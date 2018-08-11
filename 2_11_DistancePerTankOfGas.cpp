/*
	Author:		Mitchell Nix
	Date:		7/212/2018
	Prog:		2_11_DistancePerTankOfgas.cpp
	Descr:
		A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
		and 28.9 miles per gallon when driven on the highway. Write a program that calculates
		and displays the distance the car can travel on one tank of gas when driven in town
		and when driven on the highway.

		Hint: The following formula can be used to calculate the distance:
		  Distance =  Number of Gallons X Average Miles per gallon.

*/

#include <iostream>
using namespace std;

int main() {
	const int TANK_SIZE = 20;
	float highwayMPG = 28.9, cityMPG = 23.5;

	cout << "Your car's MPG is as follows " << endl;
	cout << "City: " << TANK_SIZE * cityMPG << endl;
	cout << "Highway: " << TANK_SIZE * highwayMPG << endl;
	return 0;
}