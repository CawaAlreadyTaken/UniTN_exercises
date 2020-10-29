#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int uni = 0;
	for (int i = 0; i < 10; i++) {
		int random_number = rand() % 6 + 1;
		if (random_number == 1) 
			uni++;
	}
	cout << "Try to guess how many 1s I obtained from a 10 dice rolls: ";
	int guess; cin >> guess;
	if (guess == uni) {
		cout << "Good job! You guessed right." << endl;
	} else {
		cout << "Wrong! I obtained " << uni << " 1s." << endl;
	}
	return 0;
}
