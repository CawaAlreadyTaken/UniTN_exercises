#include <iostream>
#include <cmath>

using namespace std;

int fact(int i) {
	int ris = 1;
	for (int j = i; j > 0; j--) {
		ris *= j;
	}
	return ris;
}

int main() {
	int n; int x;
	cout << "Give me a non-negative integer x and a positive integer n." << endl;
	cout << "x: ";
	cin >> x;
	cout << "n: ";
	cin >> n;
	double sum = 0;
	for (int i = 0; i <= n; i++) {
		sum+=pow(x, i)/fact(i);
	}
	cout.precision(8);
	cout << "My approximation of pow(e, x) is: " << fixed << sum << endl;
	return 0;
}
