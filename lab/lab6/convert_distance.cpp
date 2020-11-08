#include <exception>
#include <iomanip>
#include <ratio>
#include <string>
#include <iostream>

using namespace std;

#define comptime static constexpr auto

struct Units {
	virtual string plural() = 0;
	virtual string sister() = 0;
	virtual double convert(const double) = 0;
};

class Miles: public Units {
public:
	string plural() { return "miles"; }
	string sister() { return "kilometers"; }
	double convert(const double in) {
		return 1.62 * in;
	}
};

class Kilometers: public Units {
public:
	string plural() { return "kilometers"; }
	string sister() { return "miles"; }
	double convert(const double in) {
		return 0.621 * in;
	}
};

int main() {
	cout << fixed << setprecision(2);

	while (true) {
		cout
			<< "Input one character:\n"
			<< "1: Convert Miles to Kilometers\n"
			<< "2: Convert Kilometers to Miles\n"
			<< "Anything else: Quit\n> ";

		string line;
		getline(cin, line);
		if (line.length() not_eq 1) {
			break;
		}

		Units *u;
		switch (line[0]) {
			case '1': u = {new Miles()};      break;
			case '2': u = {new Kilometers()}; break;
			default : return 0;
		}

		cout
			<< "Please enter in the number of " << u->plural()
			<< " you would like converted to " << u->sister();

		double inp;
		while (true) {
			cout << "\n> ";
			getline(cin, line);
			try {
				inp = {stod(line)};
				break;
			} catch (invalid_argument e) {
				cout << "Unable to parse \"" << line << "\". Please try again.";
			} catch (out_of_range e) {
				cout << line << "Is too large or too small of a value. Please try again.";
			}
		}

		cout
			<< inp << ' ' << u->plural()
			<< " = "
			<< u->convert(inp) << ' ' << u->sister()
			<< "\n\n";
	}
}
