# zybook

### ch 2

Write one statement that declares an integer variable numHouses initialized to 25.

```cpp
#include <iostream>
using namespace std;

int main() {

   #define numHouses 25

   cout << numHouses << endl;

   return 0;
}
```
---

Write a statement that increases numPeople by 5.
Ex: If numPeople is initially 10, the output is: There are 15 people. 

```cpp
#include <iostream>
using namespace std;

int main() {
   int numPeople;

   cin >> numPeople;

   numPeople += 5;

   cout << "There are " << numPeople << " people." << endl;

   return 0;
}
```

---

## 7.3.2.0

Write multiple if statements:
If carYear is before 1968, print "Probably has few safety features." (without quotes).
If after 1969, print "Probably has seat belts.".
If after 1990, print "Probably has electronic stability control.".
If after 2002, print "Probably has tire-pressure monitor.".
End each phrase with period and newline. Ex: carYear = 1995 prints:

```cpp
#include <iostream>
using namespace std;

int main() {
   int carYear;

   cin >> carYear;

   if (carYear < 1968) {
      cout << "Probably has few safety features.\n";
   } if (carYear > 1969) {
      cout << "Probably has seat belts.\n";
   } if (carYear > 1990) {
      cout << "Probably has electronic stability control.\n";
   } if (carYear > 2002) {
      cout << "Probably has tire-pressure monitor.\n";
   }

   return 0;
}
```

---

## ez$$

[ez$$](ez$$.js)

---

## 13.1.3: Function call with parameter: Printing formatted measurement.

Define a function PrintFeetInchShort, with int parameters numFeet and numInches,
that prints using ' and " shorthand. End with a newline. Ex:
`PrintFeetInchShort(5, 8)` prints:

`5' 8"`

Hint: Use `\"` to print a double quote.

```cpp
#include <iostream>
using namespace std;

#define PrintFeetInchShort(pain, suffering) cout << pain << "' " << suffering << "\"\n"

int main() {
   int userFeet;
   int userInches;

   cin >> userFeet;
   cin >> userInches;

   PrintFeetInchShort(userFeet, userInches);  // Will be run with (5, 8), then (4, 11)

   return 0;
}
```

### 16.2.3: Populating an array with a for loop.

Write a for loop to populate array userGuesses with NUM_GUESSES integers. Read
integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then
userGuesses is {9, 5, 2}.

```cpp
#include <iostream>
using namespace std;

int main() {
   const int NUM_GUESSES = 3;
   int userGuesses[NUM_GUESSES];

	// epic
   for (auto &e : userGuesses) {
      cin >> e;
   }

   for (i = 0; i < NUM_GUESSES; ++i) {
     cout << userGuesses[i] << " ";
   }

   return 0;
}
```
