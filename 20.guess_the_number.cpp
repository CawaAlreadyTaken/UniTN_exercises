#include <iostream>

using namespace std;

int main() {
	cout << "Guess a number between 1 and 7." << endl;
	cout << "Is your number even? y|n: ";
	string ans;
	cin >> ans;
	if (ans == "n") {
		cout << "Is it greater than 4? y|n: ";
		cin >> ans;
		if (ans == "y") {
			cout << "Is it greater than 6? y|n: ";
			cin >> ans;
			if (ans == "y") cout << "Your number is 7." << endl;
			else if (ans == "n") cout << "Your number is 5." << endl;
			else {
				cout << "Choice not available. Closing." << endl;
				return 0;
			}
		} else if (ans == "n") {
			cout << "Is it greater than 2? y|n: ";
			cin >> ans;	
			if (ans == "y") cout << "Your number is 3." << endl;
			else if (ans == "n") cout << "Your number is 1." << endl;
			else {
				cout << "Choice not available. Closing." << endl;
				return 0;
			}
		} else {
			cout << "Choice not available. Closing." << endl;
			return 0;
		}	
	} else if (ans == "y") {
		cout << "Is it greater than 3? y|n: ";
		cin >> ans;
		if (ans == "y") {
			cout << "Is it greater than 5? y|n: ";
			cin >> ans;
			if (ans == "y") cout << "Your number is 6." << endl;
			else if (ans == "n") cout << "Your number is 4." << endl;
			else {
				cout << "Choice not available. Closing." << endl;
				return 0;
			}
		} else if (ans == "n") {
			cout << "Your number is 2." << endl;
		} else {
			cout << "Choice not available. Closing." << endl;
			return 0;
		}	
	} else {
		cout << "Choice not available. Closing." << endl;
		return 0;
	}
	return 0;
}
