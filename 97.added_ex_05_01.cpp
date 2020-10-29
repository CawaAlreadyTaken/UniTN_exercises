#include <iostream>

using namespace std;

//n = 10

int main() {
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = (int)random()%10+1;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int x;
	cout << "Give me X: ";
	cin >> x;
	cout << "I will rotate the array by " << x << " positions." << endl;
	int b[10];
	for (int i = 0; i < 10; i++) {
		int nuovo = i+x;
		if (nuovo > 9) nuovo%=10;
		b[nuovo] = a[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}
