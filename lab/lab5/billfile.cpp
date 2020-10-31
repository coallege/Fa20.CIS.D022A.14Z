// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// Cole Gannon

#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream dataIn("transaction.dat");
	ofstream dataOut("bill.out");

	int quantity;
	float itemPrice;

	dataOut << setprecision(2) << fixed << showpoint;

	dataIn >> quantity;
	dataIn >> itemPrice;

	auto totalBill{quantity * itemPrice};

	dataOut << "The total bill is $" << totalBill << endl;

	return 0;
}
