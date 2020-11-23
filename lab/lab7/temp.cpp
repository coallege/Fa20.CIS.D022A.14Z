#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

template <class T>
T prompt(const char *prompt) {
	T out;
	cout << prompt << "\n> ";
	cin >> out;
	cin.clear();
	cin.ignore();
	return out;
}

int main() {
	auto count = prompt<int>(
		"Input the number of temperatures to be read, microbe"
	);

	if (count < 0) {
		cerr << "The number of temperatures to be read cannot be negative!\n";
		return count;
	}

	/// temperature array
	int *t = new int[count];

	for (int i{}; i < count; ++i) {
		cout << "Input temperature " << i + 1;
		t[i] = prompt<int>(":");
	}

	int *t_end = t + count;
	cout
		<< "\nThe average temperature is " << accumulate(t, t_end, 0.) / count
		<< "\nThe highest temperature is " << *max_element(t, t_end)
		<< "\nThe lowest  temperature is " << *min_element(t, t_end)
		<< endl;
}
