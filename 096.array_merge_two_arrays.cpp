#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++) {
		a[i] = random()%10;
		b[i] = random()%10;
	}
	cout << "a)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "b)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "Bubble-sorting... ";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
			if (b[j] > b[j+1]) {
				swap(b[j], b[j+1]);
			}
		}
	}
	cout << "a)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "b)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	int m[20];
	cout << "Merged)" << endl;
	int itA = 0;
	int itB = 0;
	for (int i = 0; i < 20; i++) {
		if (itA >= 10) {
			m[i] = b[itB];
			itB++;
		} else if (itB >= 10) {
			m[i] = a[itA];
			itA++;
		} else if (a[itA] < b[itB] ) {
			m[i] = a[itA];
			itA++;
		} else {
			m[i] = b[itB];
			itB++;
		}
	}	
	for (int i = 0; i < 20; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	return 0;
}
