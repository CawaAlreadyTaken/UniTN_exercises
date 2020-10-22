#include <iostream>

using namespace std;

void recursive_invert(int n) {
	if (n == 0) return;
	cout << n%10;
	n/=10;
	recursive_invert(n);
}

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	recursive_invert(n);
	cout << endl;
	return 0;
}
