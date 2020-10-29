#include <iostream>

using namespace std;

int binary_search(int a[], int start, int end, int element) {
	if (start > end) return -1;
	int return_;
	int middle = (start + end)/2;
	if (a[middle] == element) {
		return_ = middle;
	} else if (a[middle] > element) {
		return_ = binary_search(a, start, middle-1, element);
	} else {
		return_ = binary_search(a, middle+1, end, element);
	}
	return return_;
}

int main() {
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = random()%10;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Bubble-sorting... ";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	int n;
	cout << "Give me a number n i have to search: ";
	cin >> n;
	int index = binary_search(a, 0, 9, n);
	if (index != -1) {
		cout << "Element " << n << " found at index " << index << "." << endl;
	} else {
		cout << "Coult not find element " << n << "." << endl;
	}
	return 0;
}
