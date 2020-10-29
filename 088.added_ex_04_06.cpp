#include <iostream>

using namespace std;

void collatz(int n) {
	cout << n << " ";
	if (n == 1) {
		return;
	} else if (n%2 == 0) {
		collatz(n/2);
	} else {
		collatz(3*n+1);
	}
}

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	collatz(n);
	cout << endl;
	return 0;
}
