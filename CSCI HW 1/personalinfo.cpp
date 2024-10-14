#include <iostream>
using namespace std;

int main(){

	string name;
	string address;
	string city;
	string zipCode;
	string state;
	string phoneNumber;
	string major;

	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "What is your full address?" << endl;
	cout << "Street Address: ";
	getline(cin, address);
	cout << "What city do you live in?: ";
	getline(cin, city);
	cout << "Zip Code: ";
	getline(cin, zipCode);
	cout << "What state do you live in?: ";
	getline(cin, state); 

	string completeAddress = address + "\n" + city + ", "  + state + " " + zipCode;

	cout << "What is your phone number?"  << endl;
	getline(cin, phoneNumber);	
	cout << "What is your college major?" << endl;
	getline(cin, major);

	cout << "Great! This is all the information we've gathered:\n" << endl << "Name: " +  name << endl << "Address: " + completeAddress << endl << "Phone Number: " + phoneNumber << endl << "Major: " + major << "\n";

	return 0;
}