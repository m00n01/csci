#include <iostream>
using namespace std;

int main(){

	int numStudents, numTestScores, total, student, testNum;
	double score, average;

	// Get Number of Students
	cout << "How many students do you have?" << endl;
	cin >> numStudents;

	// Get the number of test scores per student
	cout << "How many test scores per student?" << endl;
	cin >> numTestScores;

	// Determine Student Average

	for (student = 1 ; student <= numStudents ; student++){

		total = 0;

		cout << "Student Number " << student << endl;
		cout << "----------" << endl;

		for (testNum = 1 ; testNum <= numTestScores ; testNum++){

			cout << "Enter test number " << testNum << ":" << endl;
			cin >> score;

			total += score;

		}

		average = total / numTestScores;

		// Display Average

		cout << "The average for student " << student << " is " << average << endl;

	}


	return 0;
}