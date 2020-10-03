// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

// Cole Gannon

#include <iostream>
#include	<iomanip>

using namespace std;

int main() {
	float price1;
	float price2;
	int quantity1;
	int quantity2;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item" << endl;

	cin >> price1 >> quantity1;

	cout << "Please input the price and quantity of the second item" << endl;
	cin >> price2 >> quantity2;

	cout << setw(15) << "PRICE" << setw(10) << "QUANTITY" << endl << endl;
	cout << setw(15) << price1 << setw(10) << quantity1 << endl;
	cout << setw(15) << price2 << setw(10) << quantity2 << endl;

	return 0;
}
