/*
	Author:		Mitchell Nix
	Date:		6/28/2018
	Prog:		2_6_AnnualPay.cpp
	Descr:
		Suppose an employee gets paid every two weeks and earns $2,200 each pay period. in
		a year, the employee gets paid 26 times. Write a program that defines the following
		variables:
			
			payAmount		This variable will hold the amount of pay the employee earns each
							pay period. Initialize the variable with 2200.
			PayPeriods		This variable will hold the number of pay periods in a year. Initialize 
							this varaiblewith the value 26.
			AnnualPay		This variable will hold the employee's total annual pay, which will
							be calculated. 

		The program should calculate the employee's total annual pay by multiplying the
		employee's pay amount by the number of pay periods in a year and store the result in
		the annualPay variable. Display the total annual pay on the screen.

*/

#include <iostream>
using namespace std;

int main() {
	double payAmount = 2200.0, annualPay; 
	int payPeriods = 26;

	annualPay = payPeriods * payAmount;

	cout << "The Employee's Annual pay is: " << annualPay;

	return 0;
}