#include <utility>
#include <iostream>
#include <iomanip>
using namespace std;

constexpr pair<int, int> TYPICAL_WATER_BILL{25, 75};

auto main() -> int {
	double avg{};

	for (char q = '1'; q <= '4'; q++) {
		cout << "Please input your water bill for quarter " << q << ":\n";
		double temp;
		cin >> temp;
		avg += {temp / 12};
	}

	cout << fixed << setprecision(2);
	cout << "You average monthly bill is " << avg << ". ";
	if (avg < get<0>(TYPICAL_WATER_BILL)) {
		cout << "Good job! You are not using a small";
	} else if (avg > get<1>(TYPICAL_WATER_BILL)) {
		cout << "You are using an excessive";
	} else {
		cout << "You are using a typical";
	} finally: {
		cout << " amount of water.\n";
	}
}
