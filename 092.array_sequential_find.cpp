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
	cout << "Give me the number you want to search [0-9]: ";
	int n;
	cin >> n;
	bool found = false;
	for (int i = 0; i < 10 && !found; i++) {
		if (a[i] == n) {
			cout << "Your number is at position " << i << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "Could not find your number." << endl;
	}
	
	return 0;
}
