#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < 2*n-1; i++) {
			if (abs(i-n) >= j) {
				cout << " ";
			} else {
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int j = n-2; j >= 0; j--) {
		for (int i = 0; i < 2*n-1; i++) {
			if (abs(i-n) >= j) {
				cout << " ";
			} else {
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
