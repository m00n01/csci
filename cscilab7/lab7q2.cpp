#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	double temp;
	cin >> temp;

	temp = static_cast<double>(temp);

	cout << fixed <<  setprecision(2) << temp;

	return 0; 
}