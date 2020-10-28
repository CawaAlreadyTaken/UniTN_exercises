#include <iostream>

using namespace std;

int recursive_pow(int b, int e) {
	int return_;
	if (e > 0) {
		return_ = b*recursive_pow(b, e-1);
	} else {
		return_ = 1;
	}
	return return_;
}

int main() {
	int b, e;
	cout << "Give me base b and exponent e." << endl;
	cout << "b: ";
	cin >> b;
	cout << "e: ";
	cin >> e;
	cout << "b to the e is " << recursive_pow(b, e) << endl;
	return 0;
}
