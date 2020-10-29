#include <iostream>

using namespace std;

int main() {
	cout << "Here you are the first 20 numbers of the Fibonacci Sequence." << endl;
	int a = 1; int b = 1;
	cout << a << " " << b;
	for (int i = 2; i < 20; i++) {
		cout << " ";
		int tmp = b;
		b = a+b;
		a = tmp;
		cout << b;
	}
	cout << endl;
	return 0;
}
