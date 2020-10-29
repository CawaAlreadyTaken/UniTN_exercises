#include <iostream>

using namespace std;

int divide(int a, int b, int & reminder) {
	int ris = 0;
	while(a > 0) {
		a-=b;
		if (a>=0) {
			ris++;
		} else {
			reminder = a+b;	
		}
	}
	return ris;
}

int main() {
	int a, b;
	cout << "Give me two positive integers a and b." << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	int reminder = 0;
	int ris = divide(a, b, reminder);
	cout << "ris: " << ris << ", reminder: " << reminder << "." << endl;
	return 0;
}
