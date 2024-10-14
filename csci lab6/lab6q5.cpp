#include <iostream>
using namespace std;

int main(){

	double propertyValue, tax;
	int lotNumber;

	const double TAX_FACTOR = 0.0065;

	// Get the First Lot Number

	cout << "Enter the property's lot number: " << endl;
	cout << "(or enter 0 to end)" << endl;

	cin >> lotNumber;

	// Continue processing as long as the user doesn't enter 0

	while (lotNumber != 0){

		// Property Value

		cout << "Enter the property's value: " << endl;
		cin >> propertyValue;

		// Calculate Taxes

		tax = propertyValue * TAX_FACTOR;

		// Display Tax

		cout << "The property tax is $" << tax << endl;

		// Repeat Loop

		cout << "Enter the property's lot number: " << endl;
		cout << "(or enter 0 to end)" << endl;

		cin >> lotNumber;

	}

	return 0;
}