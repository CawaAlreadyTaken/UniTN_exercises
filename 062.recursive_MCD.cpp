#include <iostream>
#include <algorithm>

using namespace std;

int MCD(int a, int b) {	
	int return_;
	if (a == 0) {
		return_ = b;
	} else {
		return_ = MCD(b%a, a);
	}
	return return_;

}

int main() {
	int a, b;
	cout << "Give me two positive integers a and b." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "MCD between a and b is " << MCD(a, b) << endl;
	return 0;
}
