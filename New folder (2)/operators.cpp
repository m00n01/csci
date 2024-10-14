#include <iostream>
using namespace std;

int main(){

	int count;
	int quitCount;
	char quitKey;
	char tempChar;

	cout << "What is your quit key?" << endl;

	cin >> quitKey;

	cout << "How many times do you want to press this button to quit?" << endl;

	cin >> quitCount;

	cout << "Press the " << quitKey << " " << quitCount << " times to quit!" << endl;

	while(true){
		cin >> tempChar;

		if (tempChar == quitKey){
			count++;
			if (count == quitCount){
				cout << "Bye Bye!";
				return -1;
			}
		} 
	}

}