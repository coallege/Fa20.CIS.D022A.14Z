// This program will output the circumference and area
// of the circle with a given radius.

// Cole Gannon

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main() {
	double area;
	// 2.2.2: changing float to int truncates results
	int circumference;

	area = {PI * RADIUS * RADIUS};
	// copy initialization (using the = instead of the {})
	// will allow truncation without an explicit cast
	circumference = PI * RADIUS * 2;
	cout << "The circumference of the circle is " << circumference << endl;
	cout << "The area of the circle is " << area << endl;
}
