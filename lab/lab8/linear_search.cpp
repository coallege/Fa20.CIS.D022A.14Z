// This program performs a linear search on a character array

// Cole Gannon

#include <iostream>
#include <string>
using namespace std;

template <class T>
inline T prompt(const char *prompt) {
	T out;
	cout << prompt << "\n> ";
	cin >> out;
	cin.clear();
	cin.ignore();
	return out;
}

template <class T, int size>
inline int index_of(const T list[size], const T value) {
	for (int i(0); i < size; i++) {
		if (list[i] == value) {
			return i;
		}
	}
	return -1;
}

int main() {
	const int nums[8] = {3, 6, -19, 5, 5, 0, -2, 99};

	auto needle = prompt<int>("Enter a number to search for");
	auto idx = index_of<int, 8>(nums, needle);

	cout << "The number " << needle << ' ';
	if (~idx) {
		cout << "is in the " << idx << " position of the list\n";
	} else {
		cout << "was not found in the list\n";
	}
}
