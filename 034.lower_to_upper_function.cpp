#include <iostream>

using namespace std;

char upper(char c) {
	return c+('A'-'a');
}
bool islowerletter(char c) {
	return (c >= 'a' && c <= 'z');
}

int main() {
	cout << "Give me just a letter: ";
	char c; cin >> c;
	if (islowerletter(c)) {
		cout << "Here you are the uppercase character: " << upper(c) << endl;
	} else {
		cout << "That was not a letter or was already uppercase: " << c << endl;
	}
	return 0;
}
