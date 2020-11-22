#include <iostream>
using namespace std;

// int main() {
// 	int y = 6;
// 	float x = (1 / 2) * y + 8;
// 	std::cout << x << std::endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int myNumber;
//    int yourNumber;

//    myNumber = 1;
//    yourNumber = (myNumber < 5) ? 6 : 9;

//    cout << yourNumber << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int myNumber;
//    int yourNumber;

//    myNumber = 6;
//    yourNumber = (myNumber > 2) ? myNumber : 1;

//    cout << yourNumber << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int myNumber;
//    int yourNumber;

//    myNumber = 2;
//    yourNumber = (myNumber >= 5) ? myNumber + 3 : myNumber - 1;

//    cout << yourNumber << endl;

//    return 0;
// }

// #include <iostream>
// int main() {
// 	// int x = 18;
// 	// while (x > 0) {
// 	// 	cout << x << " ";
// 	// 	x = x / 3;
// 	// }
// 	int num;
// 	int curr;
// 	cin >> num;
// 	for (int i = 0; i < num; ++i) {
// 		cin >> curr;
// 		cout << curr;
// 	}
// }

// void printPoints(string name, int age, int totalPoints) {
//    cout << name << " is " << age << endl;
//    cout << name << " made " << totalPoints << " points" << endl;
// }

// int main() {
//    string userName = "Ron";
//    int userAge = 21;
//    int regularTimePoints = 27;
//    int overtimePoints = 4;

//    printPoints(userName, userAge, regularTimePoints + overtimePoints);

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    const int NUM_ELEMENTS = 4;
//    int userVals[NUM_ELEMENTS];
//    int i;
//    int maxVal;

//    userVals[0] = 2;
//    userVals[1] = 5;
//    userVals[2] = 7;
//    userVals[3] = 4;

//    maxVal = userVals[0];
//    for (i = 0; i < NUM_ELEMENTS; ++i) {
//       if (userVals[i] >= maxVal) {
//          maxVal = userVals[i];
//          cout << maxVal << endl;
//       }
//    }

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    const int NUM_ELEMENTS = 4;
//    int userVals[NUM_ELEMENTS];
//    int i;

//    userVals[0] = -2;
//    userVals[1] = 3;
//    userVals[2] = -6;
//    userVals[3] = 7;

//    for (i = 0; i < NUM_ELEMENTS; ++i) {
//       if (userVals[i] < 0) {
//          userVals[i] = -1 * userVals[i];
//       }
//       cout << userVals[i] << endl;
//    }

//    return 0;
// }

// #include <fstream>

// int main() {
// 	ofstream file("pain");
// 	file << file.is_open();
// 	file.close();
// }

// void WaterTemperatureForCoffee(int temp) {
//    if (temp < 195) {
//       cout << "Too cold.";
//    }
//    else if ((temp >= 195) && (temp <= 205)) {
//       cout << "Perfect temperature.";
//    }
//    else if (temp > 205) {
//       cout << "Too hot.";
//    }
// }
// int main() {
//    WaterTemperatureForCoffee(205);
//    WaterTemperatureForCoffee(190);
//    return 0;
// }

// void PrintShippingCharge(double itemWeight) {
//    if ((itemWeight > 0.0) && (itemWeight <= 10.0)) {    
//       cout << (itemWeight * 0.75) << endl;
//    }
//   else if ((itemWeight > 10.0) && (itemWeight <= 15.0)) {
//      cout << (itemWeight * 0.85) << endl;
//    }
//   else if ((itemWeight > 15.0) && (itemWeight <= 20.0)) {
//       cout << (itemWeight * 0.95)<< endl;
//    }
// }
// int main() {
//    PrintShippingCharge(18);
//    PrintShippingCharge(6);
//    PrintShippingCharge(25);
//    return 0;
// }

// int MyFct(int x) {
//    int y;
//    x = x * 2;
//    y = x + 1;
//    return y;
// }
// int main() {
//    int a;
//    a = 5;
//    cout << a << " " << MyFct(a);
// }

// int DoCalc(int x, int y, int z = -1) {
//    return x * y * z;
// }

// int main() {
// 	cout << DoCalc(2, 3);
// }

int main() {
	const int NUM_ELEMENTS = 5;
int userVals[NUM_ELEMENTS];
unsigned int i;
userVals[0] = 1;
userVals[1] = 7;
userVals[2] = 4;
   
for (i = 0; i <= NUM_ELEMENTS; ++i) {
   cout << userVals[i] << endl;
}
}
