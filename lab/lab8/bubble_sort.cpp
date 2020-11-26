// This program uses a bubble sort to arrange an array of integers in
// ascending order

// Cole Gannon

#include <iostream>
#include <utility>
using namespace std;

template <int size>
inline void bubble_sort(int (&ary)[size]) {
	bool swapped{true};
	int max = size;

	while (swapped && max --> 0) {
		swapped = {false};
		for (int i{}; i < max; ++i) {
			int &first{ary[i]};
			int &second{ary[i + 1]};
			if (first > second) {
				swapped = {true};
				swap(first, second);
			}
		}
	}
}

template <int len>
inline void display_ary(int (&ary)[len], string time) {
	cout << "The values " << time << " the bubble sort is performed are:\n";
	for (auto val : ary) {
		cout << val << ", ";
	}
	cout << '\n';
}

int main() {
	int values[] = { 9, 2, 0, 11, 5 };

	display_ary(values, "before");

	bubble_sort(values);

	display_ary(values, "after");
}
