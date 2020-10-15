#include <iostream>

using namespace std;

void _swap(double * ptA, double * ptB) {
	double tmp = *ptA;
	*ptA = *ptB;
	*ptB = tmp;
}

int main() {
	double a, b;
	cout << "Give me two real numbers a and b." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	_swap(&a,&b);
	cout << "now a is " << a << " and b is " << b << "." << endl;
	return 0;
}
