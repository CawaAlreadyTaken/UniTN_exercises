#include <iostream>
#include <cctype>

using namespace std;

int main() {
	cout << "Give me just a letter: ";
	char c; cin >> c;
	if (isalpha(c) && c>'Z') {
		cout << "Here you are the uppercase character: " << char(toupper(c)) << endl;
	} else {
		cout << "That was not a letter or was already uppercase: " << c << endl;
	}
	return 0;
}
