#include <iostream>

using namespace std;

void swap_bits(short * ptA, short * ptB) {
	short lastA = *ptA&0b0000000011111111;
	short firstA = *ptA&0b1111111100000000;
	short lastB = *ptB&0b0000000011111111;
	short firstB = *ptB&0b1111111100000000;
	*ptA = firstA|lastB;
	*ptB = firstB|lastA;
}

int main() {
	short a, b;
	cout << "Give me two short integers a and b." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	swap_bits(&a, &b);
	cout << "Now a is " << a << " and b is " << b << "." << endl;
	return 0;
}
