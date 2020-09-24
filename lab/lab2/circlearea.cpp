// This program will output the circumference and area
// of the circle with a given radius.

// Cole Gannon

#include <iostream>
using namespace std;

constexpr double PI = 3.14;
constexpr double RADIUS = 5.4;

int main() {
	double area{PI * RADIUS * RADIUS};
	double diameter{RADIUS * 2};
	// copy initialization (using the = instead of the {})
	// will allow truncation without an explicit cast
	int circumference = PI * diameter;
	cout << "The circumference of the circle is " << circumference << endl;
	cout << "The area of the circle is " << area << endl;
}
