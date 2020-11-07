#include <iostream>

using namespace std;


//Probably not the best of merge sort implementations, but i think it's working
void mergeSort(int a[], int first, int last) {
	if (last==first) return;

	mergeSort(a, first, (first+last+1)/2-1);
	mergeSort(a, (first+last+1)/2, last);
	
	int i = first;
	int j = (first+last+1)/2;

	int new_arr[last-first+1];

	for (int iterator = 0; iterator < last-first+1; iterator++) {
		if (i >= (first+last+1)/2) {
			new_arr[iterator] = a[j];
			j++;
		} else if (j > last) {
			new_arr[iterator] = a[i];
			i++;
		} else if (a[i] <= a[j]) {
			new_arr[iterator] = a[i];
			i++;
		} else {
			new_arr[iterator] = a[j];
			j++;
		}
	}
	for (int it = 0; it < last-first+1; it++) {
		a[first+it] = new_arr[it];
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
	cout << "Here you are the merge sorted array: " << endl;
	mergeSort(a, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
