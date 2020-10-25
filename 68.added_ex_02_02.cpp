#include <iostream>

using namespace std;

int main() {
	float t;
	cout << "Give me a temperature in Celsius degrees: ";
	cin >> t;
	if (t < -273.15) {
		cout << "Impossible temperature!" << endl;
	} else if (t <= 0) {
		cout << "It's cold!" << endl;
	} else if (t <= 18) {
		cout << "The temperature is 'so so'" << endl;
	} else if (t <= 30) {
		cout << "Bearable temperature" << endl;
	} else {
		cout << "It's hot!" << endl;
	}
	return 0;
}
