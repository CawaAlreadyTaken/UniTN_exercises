#include <iostream>

using namespace std;

int main() {
	cout << "Give me a and b " << endl;
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "a = " << a << " and b = " << b << endl;
	return 0;
}
