#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	int sum = 0;
	while(n > 0) {
		sum+=n%10;
		n/=10;
	}
	cout << "The sum of the digits is " << sum << endl;
	return 0;
}
