#include <iostream>

using namespace std;

int main(){

	const double commission = 0.10;
	int saleTotal;
	
	cout << "Enter the sales: " << endl;	
	while (true){
		cin >> saleTotal;
		
		double commissionTotal = saleTotal * commission;

		cout << "Your commission is $" << commissionTotal << endl;

		cout << "Would you like to calculate another commission? (y/n)" << endl;
		char userInput;
		cin >> userInput;

		if (userInput == 'n'){
			break;
		}

		cout << "Enter the sales: " << endl;
	}	
	
	cout << "Done" << endl;




}