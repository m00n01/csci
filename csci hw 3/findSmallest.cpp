#include <iostream>
using namespace std;

int main(){

	int a;
	int b;
	int c;

	cout << "Number 1: " << endl;

	cin >> a;

	cout << "Number 2: " << endl;

	cin >> b;

	cout << "Number 3: " << endl;

	cin >> c;

	if (a<b){
		cout << a;
	} else if (b<c){
		cout << b;
	} else{
		cout << c;
	}

	return 0;
}