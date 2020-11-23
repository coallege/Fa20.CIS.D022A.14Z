// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Cole Gannon

#include <cstdint>
#include <fstream>
#include <iostream>
#include <stdint.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
	vector<int> grades{};

	cout << "Please input a grade from 1 to 100 or a negative number to stop\n";

	ifstream gradfile("gradfile.txt");
	int input;

	do {
		gradfile >> input;
		if (input < 0) {
			break;
		}

		if (input == 0 || input > 100) {
			cerr << "Input must be between 1 and 100\n";
			continue;
		}

		grades.push_back(input);
	} while (!gradfile.eof());

	cout
		<< "\nThe average of all the grades is "
		<< accumulate(grades.begin(), grades.end(), 0.0) / grades.size()
		<< "\nThe highest grade is "
		<< *max_element(grades.begin(), grades.end())
		<< "\nThe lowest grade is "
		<< *min_element(grades.begin(), grades.end())
		<< endl;
}

/*
7a.1.e2 Record output of input:
90
45
73
62
-99
*/

/*
The average of all the grades is 67.5
The highest grade is 90
The lowest grade is 45
*/
