// This program demonstrates a Binary Search

// Cole Gannon

#include <iostream>
#include <array>
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

template <class T, size_t len>
int bin_search(const T (&ary)[len], const T value) {
	int first{};
	int last{len - 1};
	int middle;

	while (first <= last) {
		int width{last - first};
		middle = {first + (width / 2)};

		auto current{ary[middle]};

		if (current == value) {
			return middle;
		} else if (current < value) {
			last = middle - 1;
		} else {
			first = middle + 1;
		}
	}

	return -1;
}

int main() {
	int array[] = { 34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0 };

	int needle = prompt<int>("Enter an integer to be searched for");
	int found = bin_search(array, needle);

	cout << "The value " << needle << ' ';
	if (~found) {
		cout << "is in position number " << found + 1 << " of the list\n";
	} else {
		cout << "is not in the list\n";
	}
}
