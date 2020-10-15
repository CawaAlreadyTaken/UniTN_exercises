#include <iostream>

using namespace std;

int main() {
	long long n;
	cout << "Give me a binary number n: ";
	cin >> n;
	string ris = "";
	while(n>0) {
		char h = (n%10)^1+('0'-0);
		ris = h + ris;
		n/=10;
	}
	cout << "Here is it's valued xor-ed with a string of 1s: " << ris << endl;
	return 0;
}
