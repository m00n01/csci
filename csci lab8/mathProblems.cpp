#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string inputName(){

	string name;

	cout << "Enter your name: " << endl;

	cin >> name;

	return name;

}

void generateNumbers(int& num1, int& num2){
	num1 = rand()%500+1;
	num2 = rand()%500+1;
}

int getAnswer(int num1, int num2){
	int answer;

	cout << "Equation is " << num1 << " + " << num2 << endl;
	cout << "Enter the sum: " << endl;
	cin >> answer;
	return answer;
}

void displayInfo(int right, string studentName){

	cout << "Information for " << studentName << endl;
	cout << "The number right: " << right << endl;

}


int main(){
	
	// Variables
	int counter, right, num1, num2, answer;
	
	string studentName;

	srand(time(0));
	studentName = inputName();

	for (int i = 1 ; i <=5 ; i++){
		generateNumbers(num1,num2);
		answer = getAnswer(num1, num2);

		if (answer == (num1 + num2)){
			cout << "Right!" << endl;
			right += 1;
		} else {
			cout << "Wrong!" << endl;
		}
	}

	displayInfo(right, studentName);

	return 0;
}