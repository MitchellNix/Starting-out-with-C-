/*
	Author:		Mitchell Nix
	Date:		7/23/2018
	Progr:		2_20_HowMuchPaint.cpp
	Descr:
		A particular brand of paint covers 340 square feet per gallon. Write a program to 
		determine and report approximatly how many gallons of paint will be neded to paint
		two coats on a wooden fence that is 6 feet high and 100 feet long.

*/

#include <iostream>
using namespace std;

int main() {
	int feetPerG = 340,
		numCoats = 2,
		sqFeetOfFence,
		height = 6,
		width = 100;

	float numGallons;

	sqFeetOfFence = height * width;
	numGallons = (static_cast<float>(sqFeetOfFence) * numCoats) / feetPerG;

	cout << "To paint " << numCoats << " coats on a fence " << endl;
	cout << height << " feet high and " << width << " feet wide " << endl;
	cout << numGallons << " gallons are needed " << endl;

	return 0;
}