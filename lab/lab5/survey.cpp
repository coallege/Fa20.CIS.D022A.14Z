#include <iomanip>
#include <stdint.h>
#include <iostream>
#include <string>

using namespace std;
using u16 = uint16_t;

struct count {
	u16 coffee{};
	u16 tea{};
	u16 coke{};
	u16 oj{};
};

int main() {
	struct count count;
	cout <<
		"This program performs a survey tally on beverages.\n"
		"There are four beverages to choose from:\n"
		"1. Coffee      2. Tea         3. Coke        4. Orange Juice\n";

	string line;
	u16 personNum;
	int bevNum;
	while(true) {
		cout
			<< "\nPlease input the favorite beverage of person #"
			<< ++personNum
			<< "\nChoose 1, 2, 3, or 4 from the above menu or -1 to exit.\n> ";

		line.clear();
		getline(cin, line);
		try {
			bevNum = stoi(line);
		} catch (invalid_argument e) {
			cout << "Unable to parse \"" << line << "\".";
			continue;
		} catch (out_of_range e) {
			cout << line << "Is too large or too small of a value.";
			continue;
		}

		if (bevNum == -1) {
			break;
		}

		if (bevNum < 1 || bevNum > 4) {
			cout << "Invalid selection.";
			continue;
		}

		// haha no branching
		reinterpret_cast<u16*>(&count)[bevNum - 1]++;
	};

	cout
		<< "The total number of people surveyed is " << personNum - 1
		<< ". The results are as follows:\n"
		<< left
		<< setw(17) << "\nBeverage" << "Number of Votes"
		<<             "\n*******************************"
		<< setw(17) << "\nCoffee" << count.coffee
		<< setw(17) << "\nTea" << count.tea
		<< setw(17) << "\nCoke" << count.coke
		<< setw(17) << "\nOrange Juice" << count.oj
		<< endl;
};
