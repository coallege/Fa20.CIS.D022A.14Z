// This program will write the name, address and telephone
// number of the programmer.

// Cole Gannon

#include <iostream>
using namespace std;

int main() {
	const char *name  = "Cole Gannon";
	const char *addr0 = "7880 McClellan Rd";
	const char *addr1 = "Cupertino, CA. 95014";
	const char *phone = "408-257-9985";

	cout <<
		"************\n"
		"    Programmer: " << name << "\n"
		"                " << addr0 << "\n"
		"                " << addr1 << "\n"
		"\n"
		"     Telephone: " << phone << "\n"
		"\n"
		"************" << endl;
}
