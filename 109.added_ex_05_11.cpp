#include <iostream>

using namespace std;

void recursiveEvenIfNotRequired_sorryItsLate(int a[], int start, int iterator) {
	if (start < 0) return;
	if (a[start] == 0) recursiveEvenIfNotRequired_sorryItsLate(a, start-1, iterator-1);
	else {
		bool found = false;
		int i = iterator;
		for(; i >= 0 && !found; i--) {
			if (a[i] == 0) {
				swap(a[i], a[start]);
				found = true;
			}
		}
		if (!found) {
			return;
		} else {
			recursiveEvenIfNotRequired_sorryItsLate(a, start-1, i-1);
		}
	}
}

int main() {
	srand(time(NULL));
	cout << "This is the array." << endl;
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = random()%10;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Zero's are useless, let's put those at the end: " << endl;
	cout << "(also, nobody told me i couldn't change the order of non-zero elements aswell ^^') " << endl;
	recursiveEvenIfNotRequired_sorryItsLate(a, 9, 8);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
