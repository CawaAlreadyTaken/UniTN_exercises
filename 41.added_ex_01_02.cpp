#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cout << "Give me positive integer n: ";
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum+=pow(-1, i+1)*4/(2*i - 1);
	}
	cout.precision(8);
	cout << "My approximation of PI is: " << fixed << sum << endl;
	return 0;
}
