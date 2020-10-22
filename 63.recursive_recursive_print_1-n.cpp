#include <iostream>

using namespace std;

void recurs2(int now, int stop);

void recurs1(int now, int stop) {
	cout << now << " ";
	if (now == stop) {
		return;
	} else {
		recurs2(now+1, stop);
	}
}

void recurs2(int now, int stop) {
	cout << now << " ";
	if (now == stop) {
		return;
	} else {
		recurs1(now+1, stop);
	}
}

int main() {
	int n;
	cout << "Give me positive integer n: ";
	cin >> n;
	recurs1(0, n);
	cout << endl;
	return 0;
}
