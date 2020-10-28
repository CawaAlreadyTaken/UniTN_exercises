#include <iostream>

using namespace std;

int recursive_pascal(int c, int l) {
	int return_;
	if (c < 0 || c > l) {
		return_ = 0;	
	} else if (c == 0 && l == 0) {
		return_ = 1;
	} else {
		return_ = recursive_pascal(c-1, l-1) + recursive_pascal(c, l-1);
	}
	return return_;
}

int main() {
	int c, l;
	cout << "Give me the number of the column (c) and the number of the line (l). Mind that c <= l." << endl;
	cout << "c: ";
	cin >> c;
	cout << "l: ";
	cin >> l;
	if (c <= 0 || l <= 0) {
		cout << "c and l have to be greater than 0" << endl;
		return -1;
	} else if (c > l) {
		cout << "c has to be <= l." << endl;
		return -1;
	}
	cout << "The number at position (" << c << ", " << l << ") in Pascal's triangle is " << recursive_pascal(c-1, l-1) << endl;
	cout << "Output should be equal to binomial_coefficient(" << l-1 << ", " << c-1 << ")." << endl;
	return 0;
}
