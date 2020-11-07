#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Cole Gannon

class Money {
	using t = double;

	// currency pairs
	static constexpr auto USD_EUR{1.06};
	static constexpr auto USD_MXN{9.73};
	static constexpr auto USD_YEN{124.35};

public:
	t dollars;
	t euros;
	t pesos;
	t yen;
	class EUR{};
	class MXN{};
	class YEN{};

	Money(t dollars) {
		this->dollars = dollars;
		this->euros   = dollars * Money::USD_EUR;
		this->pesos   = dollars * Money::USD_MXN;
		this->yen     = dollars * Money::USD_YEN;
	}

	template<class CUR>
	void dump1();

	template<>
	void dump1<Money::EUR>() {
		cout << "euros  : " << this->euros << '\n';
	}

	template<>
	void dump1<Money::MXN>() {
		cout << "pesos  : " << this->pesos << '\n';
	}

	template<>
	void dump1<Money::YEN>() {
		cout << "yen    : " << this->yen << '\n';
	}

	template<class ...CURs>
	void dump() {
		cout << "--------------------------------\n";
		cout << "dollars: " << this->dollars << '\n';
		auto _ = {(this->dump1<CURs>(), 0)...};
		cout << "--------------------------------\n";
	}
};

int main() {
	float dollars;

	cout << fixed << showpoint << setprecision(2);

	cout <<
		"Please input the amount of American Dollars\n"
		"you want converted to euros and pesos\n> ";
	cin >> dollars;

	Money first(dollars);
	first.dump<Money::EUR, Money::MXN>();

	cout <<
		"Please input the amount of American Dollars\n"
		"you want converted to euros, pesos, and yen\n> ";
	cin >> dollars;

	Money second(dollars);
	second.dump<Money::EUR, Money::MXN, Money::YEN>();

	cout <<
		"Please input the amount of American Dollars\n"
		"you want converted to yen\n> ";
	cin >> dollars;

	Money third(dollars);
	third.dump<Money::YEN>();

	cout <<
		"Please input the amount of American Dollars\n"
		"you want converted to euros\n> ";
	cin >> dollars;

	Money fourth(dollars);
	fourth.dump<Money::EUR>();

	cout <<
		"Please input the amount of American Dollars\n"
		"you want converted to pesos\n> ";
	cin >> dollars;

	Money fifth(dollars);
	fifth.dump<Money::MXN>();
}
