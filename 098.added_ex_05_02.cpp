#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	int b[3];
	for (int i = 0; i < 10; i++) {
		a[i] = (int)random()%3+1;
	}
	for (int i = 0; i < 3; i++) {
		b[i] = (int)random()%3+1;
	}
	cout << "a) ";
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "b) ";	
	for (int i = 0; i < 3; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	bool check = false;
	for (int i = 0; i < 10-3 && !check; i++) {
		bool flag = true;
		for (int j = 0; j < 3; j++) {
			if (a[i+j] != b[j]) flag = false;
		}
		if (flag) {
			check = true;
		}
	}
	if (check) {
		cout << "B is a sub-array of A" << endl;
	} else {
		cout << "B is NOT a sub-array of A" << endl;
	}
	return 0;
}
