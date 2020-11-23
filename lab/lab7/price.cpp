// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Cole Gannon

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

using u16 = unsigned short;

template <class T>
T prompt(const char *prompt) {
	T out;
	cout << prompt << "\n> ";
	cin >> out;
	cin.clear();
	cin.ignore();
	return out;
}

const auto dwidth = 10;

int main() {
	u16 rows{prompt<u16>("Input the number of rows")};
	u16 cols{prompt<u16>("Input the number of cols")};
	auto len{rows * cols};

	double *prices{new double[len]}; // leak leak

	for (int i{}; i < len; ++i) {
		prices[i] = prompt<double>("Input the price of an item");
	}

	cout
		<< fixed << setprecision(2)
		<< setw(cols * (dwidth + 1)) << setfill('-') << '\n'
		<< setfill(' ');
	double *curr{prices};
	for (int y{}; y < rows; ++y) {
		for (int x{}; x < cols; ++x) {
			cout << setw(dwidth) << *curr++ << " ";
		}
		cout << '\n';
	}

	cout
		<< "\nHighest Price: " << setw(dwidth) << *max_element(prices, prices + len)
		<< "\n Lowest Price: " << setw(dwidth) << *min_element(prices, prices + len)
		<< '\n';
}
