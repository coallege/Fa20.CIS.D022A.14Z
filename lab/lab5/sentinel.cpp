// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Cole Gannon

#include <iostream>
#include <string>
using namespace std;

int main() {
	int month{}; // unlike in the instructions, month should be at 0
	float total{};
	float rain{};

	while (rain != -1) {
		total += rain;
		month += 1;

		cout
			<< "Enter the total rainfall in inches for month "
			<< month
			<< "\n"
		 	<< "Enter -1 when you are finished"
			<< endl;

		// Exercise 5: You probably don't want to enter in any negative
		// values except for -1 because negative rainfall isn't a thing
		cin >> rain;
	}

	// Exercise 6: If there was nothing entered in for month one, we can print it
	if (month == 1) {
		cout << "No data has been entered" << endl;
	} else {
		cout
			<< "The total rainfall for the "
			<< month - 1 // because the last month wasn't taken
			<< " months is "
			<< total
			<< " inches."
			<< endl;
	}

	return 0;
}
