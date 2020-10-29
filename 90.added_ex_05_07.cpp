#include <iostream>
//I don't understand why, but it looks like i don't actually need to include cstdlib

using namespace std;

void recursive_reverse(int a[], int iterations) {
	if (iterations >= 5) return;
	int tmp = a[iterations];
	a[iterations] = a[9-iterations];
	a[9-iterations] = tmp;
	recursive_reverse(a, iterations+1);
}

int main() {
	int a[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		a[i] = rand()%100;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	recursive_reverse(a, 0);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
