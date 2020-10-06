// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Cole Gannon

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float a;
	float b; 
	double c;

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	c = {sqrt(pow(a, 2) + pow(b, 2))};

	cout << "The sides of the right triangle are " << a << " and " << b << endl;

	cout << fixed << setprecision(2);
	cout << "The hypotenuse is " << c << endl;

	return 0;
}
