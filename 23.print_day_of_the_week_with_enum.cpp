#include <iostream>

using namespace std;

int main() {

	enum Week{
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	int day;
	cout << "Give me a number between 1 and 7: ";
	cin >> day;

	switch (day) {
		case Monday:
			cout << "It's Monday!" << endl;
			break;
		case Tuesday:
			cout << "It's Tuesday!" << endl;
			break;
		case Wednesday:
			cout << "It's Wednesday!" << endl;
			break;
		case Thursday:
			cout << "It's Thursday!" << endl;
			break;
		case Friday:
			cout << "It's Friday!" << endl;
			break;
		case Saturday:
			cout << "It's Saturday!" << endl;
			break;
		case Sunday:
			cout << "It's Sunday! Hurray!" << endl;
			break;
		default:
			cout << "You did not insert a number between 1 and 7. Program Closing." << endl;		
	}

	return 0;
}
