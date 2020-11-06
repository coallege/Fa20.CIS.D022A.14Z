// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Cole Gannon

#include <iostream>
#include <string>
using namespace std;

#define quote "\""

void writeProverb(const int wordCode);

int main() {
	cout << (
		"Given the phrase:\n"
		"\"Now is the time for all good men to come to the aid of their _____\"\n"
		"Input a 1 if you want the sentence to be finished with party\n"
		"Input any other number for the word country:\n"
		"> "
	);

	int wordCode;
	cin >> wordCode;
	cout << endl;

	writeProverb(wordCode);
}

void writeProverb(const int c) {
	cout
		<< "Now is the time for all good men to come to the aid of their "
		<< (c == 1 ? "part" : "countr")
		<< "y.\n";
}
