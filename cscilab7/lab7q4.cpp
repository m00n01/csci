#include <iostream>
#include <string>
using namespace std;


int main(){

	string userInput;
	int stringSize; 

	cout << "Enter string:" << endl;

	getline(cin, userInput);

	cout << "Size of user userInput: " <<  userInput.size() << endl;

	return 0;
}