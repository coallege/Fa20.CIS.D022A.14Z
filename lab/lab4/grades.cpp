// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Cole Gannon

#include <iostream>
using namespace std;

int main() {
	float average;

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 60)
		cout << "You Pass" << endl;

	if (average < 60)
		cout << "You Fail" << endl;

	return 0;
}
