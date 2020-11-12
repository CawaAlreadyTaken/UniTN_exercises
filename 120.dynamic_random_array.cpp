#include <iostream>
#include <cstdlib>

using namespace std;

int * generate_numbers(int n) {
	int * a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = random()%10;
	}
	return a;
}

int main() {
	srand(time(NULL));
	int n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	int * a = generate_numbers(n);
	cout << "Here you are " << n << " random numbers." << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	delete [] a;
	return 0;
}
