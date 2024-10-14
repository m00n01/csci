#include <iostream>
using namespace std;

int main(){

	int numSeconds;
	int secondsConverted;
	
	cout << "Enter a number of seconds: " << endl;

	cin >> numSeconds;

	if (numSeconds >= 60 && numSeconds < 3600){

		secondsConverted = numSeconds / 60;

		cout << "Seconds --> Minute: " << secondsConverted << " minute(s)" << endl; 

	} else if (numSeconds >= 3600 && numSeconds < 86400){

		secondsConverted = numSeconds / 3600;

		cout << "Seconds --> Hours: " << secondsConverted << " hour(s)" << endl;
	} else if (numSeconds >= 86400){

		secondsConverted = numSeconds / 86400;

		cout << "Seconds --> Days " << secondsConverted << " day(s)" << endl;

	} else {

		cout << "That's just " << numSeconds << " second(s)." << endl;
		
	}

	return 0;
}