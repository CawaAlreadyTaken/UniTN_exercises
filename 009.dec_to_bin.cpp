#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	cout << "Insert a decimal number. ";
	int n; cin >> n;
	cout << "Here you are the same number in binary rapresentation: ";
	string ris = "";
	while(1) {
		if (n==1) {
			ris+='1'; 
			break;
		}
		if (n%2) ris+='1';
		else ris+='0';
		n/=2;
	}
	reverse(ris.begin(), ris.end());
	cout << ris << '\n';
	return 0;
}
