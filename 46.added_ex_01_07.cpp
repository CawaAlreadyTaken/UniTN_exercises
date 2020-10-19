#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n;
	cout << "Give me a binary number n: ";
	cin >> n;
	int k = (int)(log10(n)+1);
	cout << k;
	char ris[k+1];
	int it = k;
	while(n>0) {
		char h = (n%10)^1+('0'-0);
		ris[it] = h;
		n/=10;
		it--;
	}
	cout << "Here is it's value xor-ed with a string of 1s: ";
	for (int i = 0; i < k+1; i++) {
		cout << ris[i];
	}
	cout << endl;
	return 0;
}
