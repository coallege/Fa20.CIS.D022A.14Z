// Cole Gannon

// Exercise 1: Originally, the program was not user friendly
// because the user doesn't know that to exit, you need to press x

#include <iostream>
using namespace std;

int main() {
	char letter = 'a';

	cout << "Press x to exit\n";
	do {
		cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	} while (letter != 'x'); // changing this to a do while doesn't do anything

	return 0;
}
