#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int parity = rand()%2;
	char letter;

	if (parity == 1) {
		cout << "An upper case letter has been extracted. Guess it!" << endl;
		letter = rand()%26 + ('A');
	} else {
		cout << "A lower case letter has been extracted. Guess it!" << endl;
		letter = rand()%26 + ('a');
	}
	bool found = false;
	char guess;
	while(!found) {
		cin >> guess;
		if (guess == letter) {
			cout << "You won!" << endl;
			found = true;
		} else {
			cout << "Wrong guess. Try again!" << endl;
		}
	}
	return 0;
}
