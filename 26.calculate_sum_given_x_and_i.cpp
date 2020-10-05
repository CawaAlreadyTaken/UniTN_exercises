#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me positive float x and int i." << endl;
	float x;
	int i;
	cout << "x: ";
	cin >> x;
	cout << "i: ";
	cin >> i;
	float sum = 0;
	for (int j = 1; j <= i; j++) {
		sum += pow(-1, i)*(1/pow(x, i));
	}
	cout << "The sum is " << sum << endl;
	return 0;
}
