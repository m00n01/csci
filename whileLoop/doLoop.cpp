#include <iostream>
using namespace std;

int main(){

	int score1, score2, score3;
	int avg;
	char keepgoing = 'y';

	do{

		cout << "Enter 3 scores and I will average them: " << endl;
		cin >> score1;
		cin >> score2;
		cin >> score3;

		avg = (score1+score2+score3)/3;

		cout << "The average: " << avg << endl;

		cout << "Do you want to average another set? (y/n)" << endl;
		cin >> keepgoing;

./	}
	while(keepgoing == 'y');

	cout << "Done";

	return 0;
}