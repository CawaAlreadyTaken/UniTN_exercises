#include <iostream>
#include <cmath>

using namespace std;

bool recursive_palindr(long long n) {
	bool return_;
	long long ten = pow(10, (int)log10(n));
	if (n<10) {
		return_ = true;
	}
	else if (n < 100) {
		if (n%11 == 0) return_ = true;
		else return_ = false;
	}
	else if (n%10 == n/ten && recursive_palindr((n%ten)/10)) {
		return_ = true;
	}
	else {
		return_ = false;
	}
	return return_;
}

int main() {
	long long n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	if (recursive_palindr(n)) {
		cout << n << " is palindrome." << endl;
	} else {
		cout << n << " is NOT palindrome." << endl;
	}
	return 0;
}
