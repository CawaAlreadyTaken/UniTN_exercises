#include <iostream>
#include <cmath>

using namespace std;

void recursive_divis(int iterator, int n) {
	if (n%iterator == 0) cout << iterator << " ";
	if (iterator > n) return;
	recursive_divis(iterator+1, n);
}

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	cout << "Here are its divisors: ";
	recursive_divis(2, n);
	cout << endl;
	return 0;
}
