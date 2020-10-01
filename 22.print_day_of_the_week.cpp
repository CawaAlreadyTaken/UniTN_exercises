#include <iostream>

using namespace std;

int main() {
	cout << "Give me a number between 1 and 7. ";
	int n; cin >> n;
	switch (n) {
		case 1:
			cout << "It's Monday!" << endl;
			break;
		case 2:
			cout << "It's Tuesday!" << endl;
			break;
		case 3:
			cout << "It's Wednesday!" << endl;
			break;
		case 4:
			cout << "It's Thursday!" << endl;
			break;
		case 5:
			cout << "It's Friday!" << endl;
			break;
		case 6:
			cout << "It's Saturday!" << endl;
			break;
		case 7:
			cout << "It's Sunday! Hurray!" << endl;
			break;
		default:
			cout << "You did not insert a number between 1 and 7. Program Closing." << endl;
	}
	return 0;
}
