#include <iostream>
using namespace std;

int main(){
	
	int booksPurchased;

	cout << "How many books did you purchase this month?" << endl;

	cin >> booksPurchased;

	if (booksPurchased == 1){
		cout << "You earned 5 points!";
	} else if (booksPurchased == 2){
		cout << "You earned 15 points!";
	} else if (booksPurchased == 3){
		cout << "You earned 30 points!";
	} else if (booksPurchased >= 4 ){
		cout << "You earned 60 points!";
	} else {
		cout << "You earned 0 points!";
	}

	return 0;
}