#include <iostream>
#include <cstdlib>

using namespace std;

int ** generate_matrix(int r, int c) {
	int ** a = new int * [r];
	for (int i = 0; i < r; i++) {
		a[i] = new int[c];
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = random()%10;
		}
	}
	return a;
}

int main() {
	srand(time(NULL));
	int r, c;
	cout << "Give me a positive integer r (rows) and c (columns): " << endl;
	cout << "r: ";
	cin >> r;
	cout << "c: ";
	cin >> c;
	int ** a = generate_matrix(r, c);
	cout << "Here you are the matrix " << r << "x" << c  << ":" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < r; i++) {
		delete [] a[i];
	}
	delete [] a;
	return 0;
}
