#include <iostream>
#include <iomanip>
using namespace std;

// Cole Gannon

// This function takes cents as an integer and converts it to dollars
// and cents. The default value for cents is 150 which is converted
// to 1.50 and stored in dollars
void normalizeMoney(float &dollars, const int cents = 150);

int main() {
	const int cents{95};
	float dollars;

	cout << setprecision(2) << fixed << showpoint;

	cout << "We will now add 95 cents to our dollar total\n";

	normalizeMoney(dollars, 95);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\nWe will now add 193 cents to our dollar total\n";

	normalizeMoney(dollars, 193);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\n We will now add the default value to our dollar total\n";

	normalizeMoney(dollars, 95);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
}

void normalizeMoney(float &dollars, const int cents) {
	float total = 0;

	// Fill in the definition of sum as a static local variable
	static auto sum = 0.0;

	dollars = {static_cast<float>(cents / 100.0)};

	total += {dollars};
	sum += {dollars};

	cout
		<< "We have added another $" << dollars << " to our total\n"
		<< "Our total so far is $" << sum << "\n"
		<< "The value of our local variable total is $" << total << "\n";
}
