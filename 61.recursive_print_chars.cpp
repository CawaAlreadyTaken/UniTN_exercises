#include <iostream>

using namespace std;

void recurs_print(char a, char b) {
	if (a > b)
		return;
	cout << a << " ";
	recurs_print(a+1, b);
}

int main() {
	char X, x;
	cout << "Give me two characters X and x such that X comes before x in ascii table." << endl;
	cout << "X: ";
	cin >> X;
	cout << "x: ";
	cin >> x;
	cout << X << " ";
	recurs_print(X+1, x);
	cout << endl;
	return 0;
}
