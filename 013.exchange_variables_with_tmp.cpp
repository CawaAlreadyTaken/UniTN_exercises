#include <iostream>

using namespace std;

int main() {
	cout << "Give me a and b integers. " << endl;
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << " and b = " << b << endl;
	return 0;
}
