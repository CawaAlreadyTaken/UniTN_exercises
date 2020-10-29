#include <iostream>

using namespace std;

int main() {
	cout << "Give me a positive integer. That will be the height of your triangle: ";
	int n;
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
	return 0;
}
