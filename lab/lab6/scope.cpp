#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Cole Gannon

const double PI = 3.14;
const double RATE = 0.25;

void findArea(const float, float &);
void findCircumference(const float, float &);

#define global "PI, RATE, findArea, findCircumference"

int main() {
	#define main0 global ", radius"

	cout << fixed << showpoint << setprecision(2);
	const float radius = 12;

	cout <<
		"MAIN0 OUTER BLOCK\n"
		main0 " are active here\n\n";

	{
		float area;

		cout <<
			"MAIN1 FIRST INNER BLOCK\n"
			main0 ", area are active here\n\n";

		// E4: the radius that is passed to findArea is 12
		findArea(radius, area);

		cout << "The radius = " << radius << "\nThe area = " << area << "\n\n";
	}

	{
		float radius = 10;
		float circumference;

		cout <<
			"MAIN1 SECOND INNER BLOCK\n"
			main0 ", radius, circumference are active here\n\n";

		findCircumference(radius, circumference);

		cout << "The radius = " << radius << "\nThe circumference = " << circumference << "\n\n";
	}

	cout <<
		"MAIN0 AFTER ALL DONE\n"
		main0 " are active here\n\n";
}

void findArea(const float rad, float &answer) {
	cout <<
		"AREA FUNCTION\n"
		global ", rad, answer are active here\n\n";

	answer = PI * rad * rad;
}

void findCircumference(const float length, float &distance) {
	cout <<
		"CIRCUMFERENCE FUNCTION\n"
		global ", length, distance are active here\n\n";

	distance = 2 * length * PI;
}
