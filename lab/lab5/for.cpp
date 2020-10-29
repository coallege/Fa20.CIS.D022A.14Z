// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Cole Gannon

#include <iostream>
#include <string>
using namespace std;

int prompt_int(string prompt) noexcept {
	string line;
	cout << prompt;
	getline(cin, line);
	while (true) {
		try {
			return stoi(line);
		} catch (invalid_argument e) {
			cout << "Unable to parse \"" << line << "\", please try again.";
		} catch (out_of_range e) {
			cout << line << "Is too large or too small of a value. Please try again.";
		}
	}
}

int main() noexcept {
	cout <<
		"This program computes the sum of the integer values n...m\n"
		"It seems that a limitation of the instructions are to make\n"
		"only accept positive integers.\n";

	// since I've modified the code to check for errors in parsing integers,
	// entering 2.99, for instance will just say that it's unable to parse it.
	cout << "Please enter a value for the lower bound\n";
	auto n = prompt_int("n = ");

	cout << "Please enter a value for the upper bound\n";
	auto m = prompt_int("m = ");

	if (n > 0) {
		int count{m - n + 1};
		int total{};
		int i{n};
		while (i <= m) {
			total += i++;
		}

		// this cast is needed so that the division is floating point division
		auto mean = static_cast<float>(total) / count;
		cout
			<< n
			<< "..."
			<< m
			<< " or "
			<< n
			<< " through "
			<< m
			<< "\nTotal: "
			<< total
			<< "\nCount: "
			<< count
			<< "\nMean: "
			<< mean;
	} else {
		cout << "Invalid input - integer must be positive";
	}

	cout << endl;
}
