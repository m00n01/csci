#include <iostream>
using namespace std;

bool didPass(double score){

	if (score >= 60){
		return true;
	}
	return false;

}

int main(){

	double score;

	cout << "Did you pass?" << endl;

	cin >> score;

	if (didPass(score)){
		cout << "You passed!" << endl;
	} else {
		cout << "You failed!" << endl;
	}

}

