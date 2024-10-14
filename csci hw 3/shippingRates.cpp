#include <iostream>
using namespace std;

int main(){

	int packageWeight;

	cout << "How many pounds is your packagae? " << endl;

	cin >> packageWeight;

	if (packageWeight > 2 && packageWeight >= 6){
		cout << "You owe $" << packageWeight * 2.20;
	} else if (packageWeight > 6 && packageWeight <= 10){
		cout << "You owe $" << packageWeight * 3.70;
	} else if (packageWeight >= 10){
		cout << "You owe $" << packageWeight * 3.80;
	} else {
		cout << "You owe $" << packageWeight * 1.10;
	}

	return 0;
}