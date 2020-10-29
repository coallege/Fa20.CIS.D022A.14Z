// This program finds the average time spent programming by a student
// each day over a three day period.

// Cole Gannon

#include <iostream>
using namespace std;

#define microbe "biology"

int main() {
	int numStudents;
	int numDays;

	cout <<
		"This program will find the average number of hours a day "
		"that a student spent programming over a long weekend.\n\n"
		"How many students are there?\n"
		"> ";
	cin >> numStudents;
	cin.clear();
	cout <<
		"How many days does this span?\n"
		"> ";
	cin >> numDays;

	for (int student{}; student ++< numStudents;) {
		int totalProg{};
		int totalBiol{};
		for (int day{}; day ++< numDays;) {
			cout << "Day " << day << "\n";

			cout << "Hours spent programming\n> ";
			int tempProg;
			cin >> tempProg;

			cout << "Hours spent studying " microbe "\n> ";
			int tempBiol;
			cin >> tempBiol;

			totalProg += tempProg;
			totalBiol += tempBiol;
		}

		cout
			<< "Student #" << student << "\n"
			"Average hours spent programming per day\n   "
			<< double(totalProg) / numDays << "\n"
			"Average hours spent studying " microbe "\n   "
			<< double(totalBiol) / numDays << "\n";
	}

	return 0;
}
