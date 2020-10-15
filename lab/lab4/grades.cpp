// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Cole Gannon

#include <iostream>
using namespace std;

int main() {
	float average;

	cout << "Input your average:\n";
	cin >> average;

	if (0 > average || average > 100) {
		cout << "Invalid data\n";
		return 1;
	}

	cout << "Grade: ";
	if (average >= 90) {
		cout << "A";
	} else if (average >= 80) {
		cout << "B";
	} else if (average >= 60) {
		cout << "You Pass";
	} else {
		cout << "You Fail";
	}
	cout << endl;

	return 0;
}
