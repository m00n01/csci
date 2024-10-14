#include <iostream>
using namespace std;

int main(){

	int nextChoice;

	cout << "Choose your move: (0,1,2)" << endl;

	cin >> nextChoice;

	switch(nextChoice){
		case 0:
			cout << "Rock" << endl;
			break;
		case 1:
			cout << "Paper" << endl;
			break;
		case 2:
			cout << "Scissors" << endl;
			break;
		default:
			cout << "Unknown.";
	}


	return 0;
}