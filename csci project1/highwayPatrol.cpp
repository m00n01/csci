#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void programInformation(){

	// Prints out program information.
	cout << "[Provide some useful information about AHP program" << endl;
	cout << "including your name, version, and instructions, etc.]" << endl;
	
}


void inputData(int& speedLimit, int& vehicleSpeed, string& licensePlate, int& count, int& ticketsGiven){

	/*
	
	Continues to ask to insert vehicle's/street information. 
	Typing "QUIT" will result the loop to break, and the function to exit.
	
	*/ 
	while(true){
		cout << "Enter license plate: " << endl;
		cin >> licensePlate;

		if (licensePlate == "QUIT"){
			break;
		}

		cout << "Enter current vehicle's speed: " << endl;
		cin >> vehicleSpeed;

		cout << "Enter speed limit in zone: " << endl;
		cin >> speedLimit;

		calculation(speedLimit, vehicleSpeed, licensePlate);
		count++;
	}

	displayResults(int& speedLimit, int& vehicleSpeed, string& licensePlate, int& count);
}

void calculation(int& speedLimit, int& vehicleSpeed, int& ticketsGiven, string& licensePlate){

	const int base = 120;
	int ticketCost;
	int fee;

	cout << "Vehicle's speed is " << vehicleSpeed << " mph" << endl;

	int speedLimitDifference = vehicleSpeed - speedLimit;

	// Checks if the vehicle's speed is above or below limit. If the value os negative, they were going below speed limit, else, they went above speed limit.
	if (speedLimitDifference < 0){

		cout << "Vehicle travelled " << abs(speedLimitDifference) << " miles under the speed limit." << endl; 
		cout << "No ticket is issued to " << licensePlate << endl;
		return;

	} else {

		cout << "Vehicle travelled " << speedLimitDifference << " miles over the speed limit." << endl;

	}

	if (speedLimitDifference >= 50){
		
		cout << "A ticket of $1000 is issued to " << licensePlate << endl;
		return;

	} else if (speedLimitDifference < 50 && speedLimitDifference >= 20) {
		fee = 10;
	} else {
		fee = 5;
	}

	cout << "A ticket of " << base + fee * speedLimitDifference << " is issued to " << licensePlate << endl;
	ticketsGiven++;

}


void displayResults(int& count, int& ticketsGiven){

	cout << "Tickets were given to " << ticketsGiven << " out of " << count << " vehicles." << endl;
	cout << "Percent of ticketed vehicles: " << (ticketsGiven/count)*100;

}


int main(){

	// Declare ticket variables

	int speedLimit; 
	int vehicleSpeed;
	string licensePlate;

	// Tracks how many tickets in total were processed

	int count;
	int ticketsGiven;

	// Functions

	programInformation();
	inputData(speedLimit, vehicleSpeed, licensePlate, count, ticketsGiven);



	return 0;
}