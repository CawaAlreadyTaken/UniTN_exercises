#include <iostream>
#include <cmath>

using namespace std;

void reverse(int n) {
	string ris = "";
	while(n>0) {
		int h = n%10;
		n/=10;
		ris += h+('0'-0);
	}
	cout << "Here it is the reverted number: " << ris << endl;
	return;
}

int main() {
	int n;
	cout << "Give me a positive integer: ";
	cin >> n;
	reverse(n);
	return 0;
}
