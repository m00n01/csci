#include <iostream>
#include <string>
using namespace std;


int main(){

	string password;
	bool correctPassword = false;

	while(!correctPassword){
		cout << "Enter the password" << endl;
		getline(cin, password);

		if (password == "prospero"){
			cout << "Password accepted" << endl;
			break;
		} else {
			cout << "Password not accepted, try again!" << endl;
		}
	}
	cout << "Welcome user01!";

	return 0;
}