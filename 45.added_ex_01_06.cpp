#include <iostream>

using namespace std;

int main() {
	long long n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	if (n == 1) cout << 1;
	for (int i = 2; i <= n && n > 1; i++) {
		while(n%i == 0) {
			cout << i;
			n/=i;
			if (n>1) cout << ", ";
		}
	}
	cout << endl;
	return 0;
}
