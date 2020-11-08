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
	//I can do this just because the numbers of the array are the digits (from 0 to 9)
	int discovered[10];
	for (int i = 0; i < 10; i++) {
		discovered[i] = -1;
	}
	int n = 0;
	for (int i = 0; i < 10; i++) {
		if (discovered[a[i]] == -1) discovered[a[i]] = 0;
		else if (discovered[a[i]] == 0) {
			n++;
			discovered[a[i]] = 1;
		} else {
			//The duplicate has already been counted. Don't do anything.
		}
	}
	if (n==1) {
		cout << "There is one number of the array that appears more than one time." << endl;
	} else {
		cout << "There are " << n << " numbers of the array that appear more than one time." << endl;
	}
	return 0;
}
