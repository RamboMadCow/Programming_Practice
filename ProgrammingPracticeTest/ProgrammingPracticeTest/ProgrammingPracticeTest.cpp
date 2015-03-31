// ProgrammingPracticeTest.cpp : Defines the entry point for the console application.
// This program outputs the message "Hellow, World!" to the monitor

#include "std_lib_facilities.h"


int main()
{
	constexpr double euro_dollar = 1.07445;
	constexpr double british_dollar = 1.4852;
	constexpr double yen_dollar = 0.00833705;
	
	double amount = 0;
	char unit = 0;

	cout << "Please enter a monetary amount followed by the unit (e, y, or p): ";
	cin >> amount >> unit;

	//if (unit == 'e')
	//	cout << amount << " Euros == " << euro_dollar * amount << " US Dollars.\n";
	//else if (unit == 'p')
	//	cout << amount << " British Pounds == " << british_dollar * amount << " US Dollars.\n";
	//else if (unit == 'y')
	//	cout << amount << " Japanese Yen == " << yen_dollar * amount << " US Dollars.\n";
	//else
	//	cout << "Sorry, I don't know a unit called " << unit << " is.";

	switch (unit) {
	case 'e':
		cout << amount << " Euros == " << euro_dollar * amount << " US Dollars.\n";
		break;
	case 'p':
		cout << amount << " British Pounds == " << british_dollar * amount << " US Dollars.\n";
		break;
	case 'y':
		cout << amount << " Japanese Yen == " << yen_dollar * amount << " US Dollars.\n";
		break;
	default:
		cout << "Sorry, I don't know a unit called " << unit << " is.";
	}

	cin >> amount;
	return 0;
}

