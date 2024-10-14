#include <iostream>
using namespace std;

int main(){

	int bugNum;
	int totalBugs;

	cout << "How many bugs are collected in a day?" << endl;
	cin >> bugNum;

	for (int i = 0 ; i <= 7 ; i++){
		totalBugs = bugNum * 7;
	}

	cout << totalBugs << " bugs are collected in a week!" << endl;
	

	return 0;
}