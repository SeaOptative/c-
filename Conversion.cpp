// Program name : conversion.cpp
// Author : EMMANUEL ADEBANJO
// Date last updated :  2 / 12 / 2023
// Purpose : converting length from feet and inches to centimeter. 


#include <iostream>

#include <string>

#include <iomanip>

using namespace std;

const double conversion = 2.54;

const int inchesInFoot = 12;

double getLength();

//main method

int main()

{
	cout << "Length conversion from Feet and inches to Centimeters. " << endl;
	cout << "**********************************************************" << endl;

	double feet;

	double inches;

	double centimeters;

	cout << fixed << showpoint << setprecision(2);

	cout << "Feet: ";

	feet = getLength();

	cout << endl;

	cout << "Inches: ";

	inches = getLength();

	cout << endl;

	centimeters = (inchesInFoot * feet + inches) * conversion;

	cout << "The conversion in centimeters: is " << centimeters << endl;

	return 0;

}

//getLength method definition

double getLength()

{
	//error message

	string str = "A non-positive number was  entered";

	double number;

	bool done = false;

	//looping until a non-positive number is entered

	do {

		try {

			cout << "Enter a non-negative number you would like to convert: ";

			cin >> number;


			if (cin.fail() || number < 0)

				throw str;

			done = true;

		}

		// catch block

		catch (string messageStr) {

			//displaying error message

			cout << messageStr << endl;

			cin.clear();

			cin.ignore(100, '\n');

			cout << endl;

		}

	} while (!done);

	//returning validated number

	return number;

}