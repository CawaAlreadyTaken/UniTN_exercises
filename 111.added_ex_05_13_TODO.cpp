#include <iostream>

using namespace std;

int alg_complement(int a[], int row, int column) {
	return pow(-1, row+column)*determinant(a, row+1, 
}

int main() {
	srand(time(NULL));
	cout << "This is the matrix:" << endl;
	int a[10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = random()%10;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << " ";
		} cout << endl;
	}
	cout << endl;
	int det = 0;
	for (int i = 0; i < 10; i++) {
		det+=a[0][i]*alg_complement(a, 0, i);
	}
	return 0;
}
