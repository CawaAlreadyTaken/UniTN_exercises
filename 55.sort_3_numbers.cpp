#include <iostream>
#include <algorithm>

using namespace std;

void sort_three(int & a, int & b, int & c) {
	int tmp = min(a, b);
	a = max(a, b);
	b = tmp;
	tmp = min(a, c);
	a = max(a, c);
	c = tmp;
	tmp = min(b, c);
	b = max(b, c);
	c = tmp;
	return;
}

int main() {
	int a, b, c;
	cout << "Give me three integers and i will sort them." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	sort_three(a, b, c);
	cout << "Here you are: " << c << " " << b << " " << a << "." << endl;
	return 0;
}
