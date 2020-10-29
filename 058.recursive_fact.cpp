#include <iostream>

using namespace std;

int fact(int n){
	int return_;
	if (n < 2) {
		return_ = 1;
	}
	else {
		return_ = n*fact(n-1);
	}
	return return_;
}

int main() {
	int n;
	cout << "Give me a non-negative integer n: ";
	cin >> n;
	cout << "Here is " << n << " factorial: " << fact(n) << endl;
	return 0;
}
