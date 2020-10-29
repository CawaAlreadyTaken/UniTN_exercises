#include <iostream>

using namespace std;

int main() {
	cout << "Give me a positive integer and i will tell you if it is prime: ";
	int n; cin >>  n;
	bool prime = true;
	if (n == 1) {
		cout << "1 is not a prime number." << endl;
		return 0;
	}
	for (int i = 2; i*i <= n && prime; i++) {
		if (n%i==0) {
			cout << n << " is not a prime number." << endl;
			prime = false;
		}
	}
	if (prime) {
		cout << n << " is a prime number." << endl;
	}
	return 0;
}
