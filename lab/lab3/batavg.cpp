// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Cole Gannon

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main() {
	// 3.4.1 leaving this as an int makes the answer 0

	// you only need to cast one of them because the compiler will automatically
	// cast the other one since you're dividing anyways

	// might as well make it a constexpr since the entire thing is known anyways
	constexpr auto batAvg = HITS / static_cast<float>(AT_BAT);
	cout << "The batting average is " << batAvg << endl;

	return 0;
}
