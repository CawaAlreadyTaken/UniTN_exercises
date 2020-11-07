#include <iostream>
//I think I am trying to implement quicksort with low pivot,
//since nobody told me which pivot I should use.

using namespace std;

void quicksort(int a[], int first, int last) {
	if (last-first <= 1) return;
	//I am putting a[first] as pivot.
	int j = first;
	for (int i = first+1; i <= last; i++) {
		if (a[i] < a[first]) {
			j++;
			swap(a[i], a[j]);
		}
	}
	swap(a[first], a[j]);
	quicksort(a, first, j-1);
	quicksort(a, j+1, last);
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
	cout << "This is the array sorted with low_pivot quick sort:" << endl;
	quicksort(a, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
