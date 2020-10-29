#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = random()%10;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Bubble-sorting... ";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
