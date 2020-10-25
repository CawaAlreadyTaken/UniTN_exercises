#include <iostream>

using namespace std;

int main() {
	int i = 1;
	long int l = 1e12;
	long long int ll = 5e18;
	float f = 1.2;
	double d = 4.20;
	long double g = 3.14;
	unsigned int u = 4;
	char c = 'a';
	
	cout << "size of int: " << sizeof(i) << endl;
	cout << "size of long int: " << sizeof(l) << endl;
	cout << "size of long long int: " << sizeof(ll) << endl;
	cout << "size of float: " << sizeof(f) << endl;
	cout << "size of double: " << sizeof(d) << endl;
	cout << "size of long double: " << sizeof(g) << endl;
	cout << "size of unsigned int: " << sizeof(u) << endl;
	cout << "size of char: " << sizeof(c) << endl;

	return 0;
}
