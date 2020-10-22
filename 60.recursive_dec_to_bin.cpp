#include <iostream>
#include <cmath>

using namespace std;

long long recursive_bin(int n, int depth){
	long long return_;
	if (n > 0) {
		return_ = recursive_bin(n/2, depth+1) + (n%2)*pow(10, depth);
	} else {
		return_ = 0;
	}
	return return_;
}

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	cout << "That number is " << recursive_bin(n, 0) << " in binary." << endl;
	return 0;
}
