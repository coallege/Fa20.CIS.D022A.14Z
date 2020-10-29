// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Cole Gannon

#include <ctype.h>
#include <iostream>
#include <stdexcept>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

#define on(val) case val:
#define end break;

const float A_COFFEE_COST   = 1.00;
const float B_TEA_COST      = 0.75;
const float C_HOT_CHOC_COST = 1.25;
const float D_CAPPUCCN_COST = 2.50;

int main() noexcept {
	int numCups;
	float cost;
	char beverage;
	string line; // because of how evil cin >> works, I'm just using getline.

	cout << fixed << showpoint << setprecision(2);

	loop: do {
		cout <<
			"Hot Beverage Menu\n\n"
			"A: Coffee          $1.00\n"
			"B: Tea             $ .75\n"
			"C: Hot Chocolate   $1.25\n"
			"D: Cappuccino      $2.50\n\n\n"
			"Enter the beverage that you want. (A, B, C, or D)\n"
			"Enter E to exit the program";

		prompt_beverage:
		cout << "\n> ";
		line.clear();
		getline(cin, line);

		if (line.length() > 1) {
			cout << "Input too long. Please try again";
			goto prompt_beverage;
		}

		beverage = tolower(line[0]);

		switch (beverage) {
			on('a')
			on('b')
			on('c')
			on('d') end
			on('e') {
				cout << "Please come again\n";
				goto the_end_of_the_file;
			}
			default: {
				cout << "Invalid Selection. Please try again";
				goto prompt_beverage;
			}
		}

		cout << "How many cups would you like?";
		prompt_cups:
		cout << "\n> ";
		line.clear();
		getline(cin, line);

		try {
			numCups = stoi(line);
		} catch (invalid_argument e) {
			cout << "Unable to parse \"" << line << "\", please try again.";
			goto prompt_cups;
		} catch (out_of_range e) {
			cout << line << "Is too large or too small of a value. Please try again.";
			goto prompt_cups;
		}

		switch (beverage) {
			on('a')
				cost = numCups * A_COFFEE_COST;
			end
			on('b')
				cost = numCups * B_TEA_COST;
			end
			on('c')
				cost = numCups * C_HOT_CHOC_COST;
			end
			on('d')
				cost = numCups * D_CAPPUCCN_COST;
			end
		}
		cout
			<< "The total cost is $"
			<< cost
			<< "\n-----------------------------------\n";
	// horrible way to use a do-while but these are the requirements.
	} while (beverage != 'e');
	the_end_of_the_file:;
}
