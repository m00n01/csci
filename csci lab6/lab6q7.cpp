#include <iostream>
using namespace std;

int main(){

	int numRows, numColumns, currentRow, currentColumn;
	char currentColumnLetter;

	cin >> numRows;
	cin >> numColumns;

	for (currentRow = 1 ; currentRow <= numRows ; i++){

		currentColumnLetter = 'A';

		for (int currentColumn  = 1 ; currentColumn < numColumns ; currentColumn++){

			cout << currentRow << currentColumn << " " << endl;
			currentColumnLetter++;
			
		}

		cout << endl;

	}

	return 0;
}