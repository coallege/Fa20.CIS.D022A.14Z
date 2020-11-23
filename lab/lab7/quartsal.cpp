// This program will read in the quarterly sales transactions for a given number
// of years. It will print the year and transactions in a table format.
// It will calculate year and quarter total transactions.

// Cole Gannon

#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>
#include <sstream>

using namespace std;

using u16 = unsigned short;
using u32 = unsigned int;

template <class T>
T prompt(const char *prompt) {
	T out;
	cout << prompt << "\n> ";
	cin >> out;
	cin.clear();
	cin.ignore();
	return out;
}

class Year {
public:
	u16 year;
	/// transaction count per quarter
	u32 trans[4]{};

	u32 total;

	Year() {
		auto year = prompt<int>("Enter the year or a negative number to stop");
		if (year < 0) {
			throw 0;
		} else {
			this->year = year;
		}

		for (int i{}; i < 4; ++i) {
			cout
				<< "Enter the number of transactions for Quarter "
				<< i + 1
				<< " of the year "
				<< year;
			this->trans[i] = prompt<u32>("");
		}

		this->total = accumulate(this->trans, this->trans + 4, 0);
	}
};

inline void table_heading() {
	cout <<
		"YEARLY QUARTERLY SALES\n\n\n"
		"           YEAR"
		"      Quarter 1      Quarter 2"
		"      Quarter 3      Quarter 4"
		"      Yearly Total\n";
}

const auto w{15};
#define wout setw(w)

#define bar setw(w * 6) << setfill('-') << "" << setfill(' ') << '\n'

int main() {
	cout << fixed << setprecision(2);
	vector<Year *> years{};

	while (true) {
		try {
			years.push_back(new Year());
		} catch (...) {
			break;
		}
	}

	cout
		<< '\n'
		<< "YEARLY QUARTERLY SALES\n"
		<< bar
		<< wout << "YEAR";

	for (int i{}; i < 4;) {
		stringstream ss{};
		ss << "Quarter " << ++i;
		cout << wout << ss.str();
	}

	cout
		<< wout << "Year Total"
		<< '\n';

	for (auto y : years) {
		cout << setw(w) << y->year;
		for (int q{}; q < 4; ++q) {
			cout << wout << y->trans[q];
		}
		cout << wout << y->total << '\n';
	}

	cout
		<< bar
		<< wout << "Average";

	auto year_count = years.size();
	for (int q{}; q < 4; ++q) {
		long double running_total;
		for (int i{}; i < year_count; ++i) {
			running_total += years[i]->trans[q];
		}
		cout << wout << running_total / year_count;
	}

	unsigned long running_year_total{};
	for (auto y : years) {
		running_year_total += y->total;
	}

	cout << wout << running_year_total / static_cast<double>(year_count) << '\n';
}
