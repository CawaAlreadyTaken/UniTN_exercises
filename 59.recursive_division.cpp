#include <iostream>

using namespace std;

int recursive_division(int a, int b, int ris, int & reminder) {
	int return_;
	if (a >= b) {
		return_ = recursive_division(a-b, b, ris+1, reminder);
	} else {
		return_ = ris;
		reminder = a;
	}
	return return_;
}

int main() {
	int a, b;
	cout << "Give me two positive integers a and b." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	int reminder = 0;
	cout << "a/b gives " << recursive_division(a, b, 0, reminder) << ", with reminder " << reminder << endl;
	return 0;
}
