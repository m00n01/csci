#include <iostream>
using namespace std;

int main(){

	int numYears;
	int inchesOfRain;
	int totalRain;

	cout << "How many years of rain are you calculating?" << endl;
	cin >> numYears;

	while (numYears < 1){
		cout << "How many years of rain are you calculating?" << endl;
		cin >> numYears;
	}

	for (int year = 1 ; year <= numYears ; year++){

		for (int month = 1 ; month <= 12 ; month++){

			cout << "How many inches of rainfall fell on month " << month << endl;
			cin >> inchesOfRain;

			while (inchesOfRain < 0){

				cout << "Invalid Input" << endl;
				cout << "How many inches of rainfall fell on month " << month << endl;
				cin >> inchesOfRain;

			}

			totalRain += inchesOfRain;

		}
	}

	cout << "You calculated " << numYears * 12 << " months." << endl;
	cout << "Total inches of rainfall: " << totalRain << endl;
	cout << "The average rainfall per month is " << totalRain/(numYears*12) << " inches per month";

	return 0;
}