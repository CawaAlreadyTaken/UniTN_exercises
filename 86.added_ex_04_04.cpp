#include <iostream>

using namespace std;

int recursive_sum(int n) {
	int return_;
	if (n > 0) {
		return_ = n%10 + recursive_sum(n/10);
	} else {
		return_ = 0;
	}
	return return_;
}

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	cout << "The sum of the digits is " << recursive_sum(n) << endl;
	return 0;
}
