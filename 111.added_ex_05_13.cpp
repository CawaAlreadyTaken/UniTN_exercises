#include <iostream>
#include <cmath>

using namespace std;

int alg_complement(const int[][10], int column, int depth);

int calcDet(const int a[][10], int depth) {
	if (depth == 10) return a[0][0];
	int det = 0;
	for (int i = 0; i < 10-depth+1; i++) {
		det+=a[0][i]*alg_complement(a, i, depth);
	}
	return det;
}

int alg_complement(const int a[][10], int column, int depth) {
	int b[10][10];
	for (int i = 0; i < 10-depth; i++) {
		int passed = 0;
		for (int j = 0; j < 10-depth; j++) {
			if (j == column) passed = 1;
			b[i][j] = a[i+1][j+passed];
		}
	}
	return pow(-1, column)*calcDet(b, depth+1);
}

int main() {
	srand(time(NULL));
	cout << "This is the matrix:" << endl;
	int a[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = random()%10-5;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << '\t';
		} cout << endl;
	}
	cout << endl;
	int det = calcDet(a, 1);
	cout << "This matrix determinant, according to Laplace Formula, is " << det << "." <<  endl;
	return 0;
}
