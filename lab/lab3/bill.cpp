// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Cole Gannon

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int quantity;
	string itemName;
	float itemPrice;
	float totalBill;

	cout
		<< setprecision(4)
		<< fixed // as a decimal
		<< showpoint;	// include the stuff after the dot

	cout << "Please input the name of the item" << endl;
	getline(cin, itemName);

	cout << "Please input the number of items bought" << endl;
	cin >> quantity;

	cout << "Please input the price of each item" << endl;
	cin >> itemPrice;

	totalBill = {quantity * itemPrice};

	cout
		<< "The item that you bought is " << itemName
		<< "\nThe total bill is $" << totalBill
		<< endl;
	return 0;
}
