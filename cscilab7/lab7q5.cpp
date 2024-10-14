#include <iostream>
#include <string>
using namespace std;

int main(){

	string userInput;
	char firstLetter;

	getline(cin, userInput);
	cin >> firstLetter;

	if (userInput.at(0) == firstLetter){
		cout << "First letter matches";
	} else {
		cout << "First letter doesn't match";
	}

	return 0;
}