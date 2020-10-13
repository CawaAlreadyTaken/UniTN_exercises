#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int random_number = rand()%10 + 1;
	bool number_not_found_yet = true;
	int guess;
	cout << "Try to guess a number between 1 and 10. ";
	cin >> guess;
	if (guess == random_number) {
		cout << "You won!" << endl;
		number_not_found_yet = false;
	}
	while (number_not_found_yet) {
		cout << "Wrong number. Try again. ";
		cin >> guess;
		if (guess == random_number) {
			cout << "You won!" << endl;
			number_not_found_yet = false;
		}
	}
	return 0;
}
