#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	cout << "Give me the lenght of a, b, and c: the edges of a triangle." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	if (a == b && a == c) {
		cout << "It's equilateral!" << endl;
	} else if (a == b || a == c || b == c) {
		cout << "It's isosceles!" << endl;
	} else {
		cout << "It's scalene!" << endl;
	} 
	return 0;
}
