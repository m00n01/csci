#include <iostream>
using namespace std;

int sum(int x, int y){

	return x + y;

}

double avg(int x, int y){

	return (x+y)/2;

}

int main(){

	int value1 = 20, value2 = 30, total;
	total = sum(value1, value2);
	cout << total << endl;

	double average = avg(value1, value2);
	
	cout << average << endl;

	return 0;


}

