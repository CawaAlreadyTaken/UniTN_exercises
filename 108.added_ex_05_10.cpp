#include <iostream>

using namespace std;

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
	//This array's size is like that just because the numbers of the array are the digits (from 0 to 9)
	int discovered[10];
	for (int i = 0; i < 10; i++) {
		discovered[i] = 0;
	}
	int n = 0;
	for (int i = 0; i < 10; i++) {
		discovered[a[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		if (discovered[i] > 0) {
			cout << i << ": " << discovered[i] << " time";
			if (discovered[i] > 1) cout << "s";
			cout << endl;
		}
	}
	return 0;
}
