#include <iostream>

using namespace std;

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
	for (int i = 0; i < 10/2; i++) {
		int tmp = a[i];
		a[i] = a[9-i];
		a[9-i] = tmp;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
