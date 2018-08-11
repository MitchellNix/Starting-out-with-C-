/*
	Author:		Mitchell Nix
	Date:		7/12/2018
	Prog:		2_9_CyborgDataTypeSizes
	Descr:
		You have been givena  job as a programmer on a Cyborg supercomupter. In order to
		accomplish some calculations, you need to know how amny bytes the folling data 
		types use: char, int, float, and double. You do not have any technical documentation,
		so you can't look this information up. Write a C++ program that will determine
		the ammount of memory used by these types and display the information on the screen.

*/

#include <iostream>
using namespace std;

int main() {
	cout << "The size of a char is " << sizeof(char) << endl;
	cout << "The size of an integer is " << sizeof(int) << endl;
	cout << "The size of a float is " << sizeof(float) << endl;
	cout << "The size of a double is " << sizeof(double) << endl;

	return 0;
}