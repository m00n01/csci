#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	
	string passCode;

	cin >> passCode;

	for (int i = 0 ; i < passCode.size() ; i++){

		if (isalpha(passCode.at(i))){
			passCode.at(i) = '_';
		}

	}

	cout << passCode << endl;

	return 0;
}