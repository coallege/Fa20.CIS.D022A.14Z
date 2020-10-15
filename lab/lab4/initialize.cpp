// This program tests whether or not an initialized value
// is equal to a value input by the user

// Cole Gannon

#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;

	cout << "Please enter an integer\n";
	cin >> num1;

	cout << "Please enter another integer\n";
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << '\n';

	if (num1 == num2) {
		cout <<
			"The values are the same.\n"
			"Hey, that's a coincidence!\n";
	} else {
		cout <<
			"The values are not the same\n";
	}

	return 0;
}
