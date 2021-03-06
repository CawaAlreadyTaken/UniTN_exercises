#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int mass(int a, int b = INT_MIN, int c = INT_MIN, int d = INT_MIN, int e = INT_MIN) {
	int ris;
	ris = max(a, b);
	ris = max(ris, c);
	ris = max(ris, d);
	ris = max(ris, e);
	return ris;
}

int main() {
	int n;
	cout << "How many numbers do you have? [1-5]: ";
	cin >> n;
	if (n != 4) {
		cout << "Well i don't care, i will take 4 numbers." << endl;
	}
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << "The highest number between those 4 is: " << mass(a, b, c, d) << "." << endl;
	return 0;
}
