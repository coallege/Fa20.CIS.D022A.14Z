#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Cole Gannon

#define comptime static constexpr auto

struct EUR {
	comptime s{"euros"};
	comptime USD_X{1.06};
};

struct MXN {
	comptime s{"pesos"};
	comptime USD_X{9.73};
};

struct YEN {
	comptime s{"yen"};
	comptime USD_X{124.35};
};

template <class A>
void what() {
	cout << A::s;
}

template<class A, class B>
void what() {
	cout << A::s << " and " << B::s;
}

template<class A, class B, class C>
void what() {
	cout << A::s << ", " << B::s << ", and " << C::s;
}

// https://stackoverflow.com/questions/19182425
// <3
template <class ...Cs>
inline void convert_usd_to() {
	comptime CURRENCY_WIDTH{7};

	cout << "Convert USD to "; what<Cs...>();
	cout << ':';

	double usd;
	string line;

	prompt_usd:
	cout << "\n" << setw(CURRENCY_WIDTH) << "dollars" << ": ";
	getline(cin, line);

	try {
		usd = {stod(line)};
	} catch (invalid_argument e) {
		cout << "Unable to parse \"" << line << "\", please try again.";
		goto prompt_usd;
	} catch (out_of_range e) {
		cout << line << "Is too large or too small of a value. Please try again.";
		goto prompt_usd;
	}

	// my favorite line of C++ that I've written so far
	{ auto _ = {(cout << setw(CURRENCY_WIDTH) << Cs::s << ": " << usd * Cs::USD_X << '\n', 0)...}; }
	cout << '\n';
};

int main() {
	float dollars;

	cout << fixed << showpoint << setprecision(2);

	convert_usd_to<EUR, MXN>();
	convert_usd_to<EUR, MXN, YEN>();
	convert_usd_to<YEN>();
	convert_usd_to<EUR>();
	convert_usd_to<MXN>();
}
