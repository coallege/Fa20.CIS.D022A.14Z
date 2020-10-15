// This program illustrates the use of the switch statement.

// Cole Gannon

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	// removing the break causes fallthrough
	switch (grade) {
		case 'A':
		case 'B':
		case 'C':
		case 'D': {
			cout << "YOU PASSED!\n";
		}
	}

	if (grade == 'A') {
		cout << "an A - excellent work !\n";
	} else if (grade == 'B') {
		cout << "you got a B - good job\n";
	} else if (grade == 'C') {
		cout << "earning a C is satisfactory\n";
	} else if (grade == 'D') {
		cout << "while D is passing, there is a problem\n";
	} else if (grade == 'F') {
		cout << "you failed - better luck next time\n";
	} else { // trailing else corresponds to the default: in switch
		cout << "You did not enter an A, B, C, D, or F\n";
	}
	return 0;
}
