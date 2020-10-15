#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cout << "Give me positive integer n: ";
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum+=1.0/pow(2, i);
	}
	cout.precision(8);
	cout << "My approximation of 2 is: " << fixed << sum << endl;
	return 0;
}
