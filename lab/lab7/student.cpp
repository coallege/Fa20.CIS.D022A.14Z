// This program will input an undetermined number of student names
// and a number of grades for each student. The number of grades is
// given by the user. The grades are stored in an array.
// Two functions are called for each student.
// One function will give the numeric average of their grades.
// The other function will give a letter grade to that average.
// Grades are assigned on a 10 point spread.
// 90-100 A
// 80-89 B
// 70-79 C
// 60-69 D
// Below 60 F

// Cole Gannon

#include <iostream>
#include <iomanip>
#include <numeric>
#include <string>
using namespace std;

static string prompt(string prompt) {
	cout << prompt << "\n> ";
	string out;
	getline(cin, out);
	return out;
};

class Grade {
	#define letter_above(letter, above) if (d > above) { return letter; }
	static char find_letter_grade(double d) noexcept {
		letter_above('A', 89)
		letter_above('B', 79)
		letter_above('C', 69)
		letter_above('D', 59)

		return 'F';
	}
public:
	double dec;
	char letter;

	Grade(double dec) {
		this->dec = dec;
		this->letter = Grade::find_letter_grade(dec);
	}
};

class Student {
	using grade_consumer = void (*)(Student *, Grade&);

public:
	string first_name;
	string last_name;

	size_t grade_count;
	double *grades;

	Student(size_t grade_count) {
		this->first_name = prompt("Input the student's first name");
		this->last_name = prompt("Input the student's last name");
		this->grade_count = grade_count;
		this->grades = new double[grade_count];

		cout << "Input " << grade_count << " grades:\n-----\n";
		while (grade_count --> 0) {
			cin >> grades[grade_count];
			cin.clear();
			cin.ignore();
		}
		cout << "-----\n";
	}

	void average_grade(grade_consumer fn) {
		auto avg_dec_grade = (
			accumulate(this->grades, this->grades + this->grade_count, 0.)
			/ this->grade_count
		);
		Grade avg_grade(avg_dec_grade);
		fn(this, avg_grade);
	}

	~Student() {
		// I have no idea if this even works but it doesn't really matter
		delete this->grades;
	}
};

int main() {
	cout << setprecision(2) << fixed << showpoint;

	cout << "Input the number of grades each student will receive.\n> ";

	size_t grade_count;
	cin >> grade_count;
	cin.clear();
	cin.ignore();

	char more_input;
	while (true) {
		Student curr(grade_count);
		curr.average_grade([](Student *self, Grade &avg){
			cout
				<< self->first_name << " " << self->last_name
				<< "'s average grade was a " << avg.dec
				<< " (" << avg.letter << ")\n";
		});

		cout << "Input a y if you want to input more students\n> ";
		cin >> more_input;
		cin.clear();
		cin.ignore();
		if (more_input != 'y' && more_input != 'Y') {
			break;
		}
	}
}
