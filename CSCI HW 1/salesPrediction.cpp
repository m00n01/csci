#include <iostream>
using namespace std;

int main(){
	
	double saleAmount;

	cout << "What is the projected amount of total sales?" << endl;

	cin >> saleAmount;

	int annualProfit = saleAmount * 0.23;

	cout << "Congrats! You made $" << annualProfit << " this year!";

	return 0;
}