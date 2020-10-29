#include <iostream>

using namespace std;

int recursive_seq_find(int a[], int n, int index) {
	int return_;
	if (index >= 10) {
		return_ = -1;
	} else if (a[index] == n) {
		return_ = index;	
	} else {
		return_ = recursive_seq_find(a, n, index+1);
	}
	return return_;
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
	cout << "Give me the number you want to search [0-9]: ";
	int n;
	cin >> n;
	int found = recursive_seq_find(a, n, 0);
	if (found == -1) {
		cout << "Could not find your number." << endl;
	} else {
		cout << "Number " << n << " was found at index " << found << "." << endl;
	}
	return 0;
}
