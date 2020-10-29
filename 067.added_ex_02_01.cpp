#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	cout << "Give me three numbers a, b and c." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << "The greatest is ";
	if (a > b) {
		if (a > c) {
			cout << a;
		} else {
			cout << c;
		}
	} else {
		if (b > c) {
			cout << b;
		} else {
			cout << c;
		}
	}
	cout << endl;
	return 0;
}
