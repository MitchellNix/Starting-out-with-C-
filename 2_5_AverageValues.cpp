/*
	Author:		Mitchell Nix
	Date:		6/28/2018
	Prog:		2_5_AverageValues.cpp
	Descr:
		To get the average of a series of values, you add the values up then divide the sum by
		the number of values. Write a program that sroes the following values in five different 
		variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these
		five variables, and store the result in a seperate variable named sum. Then, the program
		should divide the sum variable by 5 to get the average. Display the average on the screen.
*/

#include <iostream>
using namespace std;

int main() {
	double average, sum, num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;

	sum = (num1 + num2 + num3 + num4 + num5);
	average = sum / 5;

	cout << "The average is: " << average;

	return 0;
}