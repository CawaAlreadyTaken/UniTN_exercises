#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	cout << "These are two matrices:" << endl;
	int a[10][10];
	int b[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = random()%10;
			b[i][j] = random()%10;
		}
	}
	cout << "a)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << " ";
		} cout << endl;
	}
	cout << "b)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << b[i][j] << " ";
		} cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Sum of the two:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j]+b[i][j] << '\t';
		} cout << endl;
	}
	cout << endl;
	cout << "a - b:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j]-b[i][j] << '\t';
		} cout << endl;
	}
	cout << endl;
	cout << "Matrix Product AB:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int sum = 0;
			for (int v = 0; v < 10; v++) {
				sum+=a[i][v]*b[v][j];
			}
			cout << sum << '\t';
		} cout << endl;
	}
	
	return 0;
}
