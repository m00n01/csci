#include <iostream>
using namespace std;

int main(){

	int days;
	double total = 0.0;

	cout << "For how many days you have sales amount?" << endl;
	cin >> days;

	for (int count = 1 ; count <= days ; count++){

		double sales;
		cout << "Enter the sales for day" << count << ": ";
		cin >> sales;
		total += sales;
		
	}

	return 0;
}