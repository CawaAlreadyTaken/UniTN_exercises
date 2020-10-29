#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	int new_a[11];
	int x, n;
	for (int i = 0; i < 10; i++) {
		a[i] = (int)random()%10+1;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Give me two positive integers x and n: ";
	cout << endl;
	cout << "I will insert element x: ";
	cin >> x;
	cout << "At index n [0-10]: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		new_a[i] = a[i];
	}
	new_a[n] = x;
	for (int i = n+1; i < 11; i++) {
		new_a[i] = a[i-1];
	}
	for (int i = 0; i < 11; i++) {
		cout << new_a[i] << " ";
	}
	cout << endl;
	return 0;
}
