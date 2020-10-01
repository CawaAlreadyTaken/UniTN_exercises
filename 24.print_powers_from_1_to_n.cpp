#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, n;
	cout << "Give me two positive integers: a and n." << endl;
	cout << "a: ";
	cin >> a;
	cout << "n: ";
	cin >> n;
	if (n == 0) {
		cout << "n cannot be zero. Closing." << endl;
		return 0;
	}
	if (a < 0 || n < 0) {
		cout << "a and n cannot be negative. Closing." << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << pow(a, i) << " ";
	}
	cout << endl;
	return 0;
}
