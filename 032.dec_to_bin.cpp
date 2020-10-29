#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string b;
	cout << "Give me a binary number b." << endl;
	cout << "b: ";
	cin >> b;
	long long ris = 0;
	for (int i = b.length()-1; i >= 0; i--) {
		ris+=pow(2, b.length()-1-i)*(b[i]-'0');
	}
	cout << "Here you are the number in decimal: " << ris << endl;
	return 0;
}
