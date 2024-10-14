#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double tankCapacity;
	double maxMiles;

	cout << "How many gallons of gas does your car hold?" << endl;
	cin >> tankCapacity;
	cout << "How many miles can be driven on a full tank?" << endl;
	cin >> maxMiles;

	cout << "Your gas mileage is: " << round((maxMiles/tankCapacity)*10)/10 << " miles per gallon";


	return 0;
}