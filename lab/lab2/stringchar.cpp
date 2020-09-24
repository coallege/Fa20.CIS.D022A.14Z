// This program demonstrates the use of characters and strings

// Cole Gannon

#include <iostream>
#include <string>
using namespace std;

const string FAVORITESODA = "Dr. Dolittle";
const char BESTRATING = 'A';

int main() {
	char rating;
	string favoriteSnack;
	int numberOfPeople;
	int topChoiceTotal;

	favoriteSnack = "crackers";
	rating = 'B';
	numberOfPeople = 250;
	topChoiceTotal = 148;

	// I would like to point out that `<< endl` is really inefficient since it
	// flushes stdout every line. Ideally, you would wait till you're done writing
	// to cout and then only have that endl on the last line
	cout << "The preferred soda is " << FAVORITESODA << endl; 
	cout << "The preferred snack is " << favoriteSnack << endl; 
	cout << "Out of " << numberOfPeople << " people " << endl;
	cout << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating;
	cout << endl;
}
