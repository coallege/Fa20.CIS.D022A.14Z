// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%

// Cole Gannon

#include <iostream>
#include <iomanip>
using namespace std;

void printDescription();
/*
E3: the gross and net vars are pass by reference.
Because of E4, there is no function body.
*/
void computePaycheck(float, int, float &, float &);

void computePaycheck(const float, const int);

int main() {
	float payRate;
	int hours;

	cout << setprecision(2) << fixed;

	cout << "Welcome to the Payroll Program\n";

	printDescription();

	cout << "Please input the pay per hour\n> ";
	cin >> payRate;

	cout << "\nPlease input the number of hours worked\n> ";
	cin >> hours;

	computePaycheck(payRate, hours);

	cout
		<< "\nThe state demands 15% of your paycheck."
		<< "\nYou are not in a position to refuse."
		<< "\nHand it over, proletarian.\n";
}

void printDescription() {
	cout <<
		"************************************************\n"
		"This program takes two numbers (payRate & hours)\n"
		"and multiplies them to get gross pay.\n"
		"It then calculates net pay by subtracting 15%\n"
		"************************************************\n\n";
}

/*
(rate, time) => (gross, net)
where
gross = rate * time
net = gross - (gross * 0.15)
*/
void computePaycheck(const float rate, const int time) {
	float gross;
	double net;
	net = {(gross = {rate * time}) * 0.85};
	cout
		<< "\nThe gross pay is $" << gross
		<< "\nThe net pay is $" << net;
}
