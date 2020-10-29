#include <iostream>

using namespace std;

int main() {
	string c;
	cout << "Choose the language: i(Italian), e(English), f(French), s(Spanish): ";
	cin >> c;
	if (c.length()>1) {
		cout << "You chose a non-existent option. Program closing." << endl;
		return 0;
	}
	switch (c[0]) {
		case 'i':
			cout << "Buongiorno!" << endl;
			break;
		case 'e':
			cout << "Good Morning!" << endl;
			break;
		case 'f':
			cout << "Bonjour!" << endl;
			break;
		case 's':
			cout << "Buenos Días!" << endl;
			break;
		default:
			cout << "You chose a non-existent option. Program closing." << endl;
	}
	return 0;
}
