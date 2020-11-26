#include <iostream>
#include <vector>

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

template <class T>
inline void bubble_sort(const T *v, const int size) {
	bool swapped{true};
	int max = size;

	while (swapped && max --> 0) {
		swapped = {false};
		for (int i{}; i < max; ++i) {
			int &first{v[i]};
			int &second{v[i + 1]};
			if (first > second) {
				swapped = {true};
				swap(first, second);
			}
		}
	}
}

template <class T>
int bin_search(const T *ary, const int size, const T value) {
	int first{};
	int last{size - 1};
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
	int len{prompt<int>("Enter the number of elements")};
	if (len < 0) {
		cerr << "The number of elements must be greater than or equal to zero!\n";
		return len;
	}

	int *ary{new int[len]};

	long total{};
	for (int i{}; i < len; ++i) {
		cout << "Enter element " << i;
		total += {ary[i] = prompt<int>("")};
	}

	auto mean{total / len};

	cout << "\nint array[" << len << "] {\n";
	for (int i{}; i < len; ++i) {
		cout << "   " << ary[i] << ",\n";
	}
	cout << "};\n";

	cout
		<< "\ntotal = " << total
		<< "\nmean  = " << mean
		<< "\n\n";

	auto needle{prompt<int>("Search for an integer")};
	auto found{bin_search(ary, len, needle)};

	cout << "The value " << needle << ' ';
	if (~found) {
		cout << "was found at index " << found << "\n";
	} else {
		cout << "was not found in the array\n";
	}
}
