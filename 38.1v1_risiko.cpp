#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int def = random() % 6 + 1;
	int att = random() % 6 + 1;
	if (att > def) {
		cout << "Attacker won, " << att << "-" << def << endl;
	} else {
		cout << "Defender won, " << def << "-" << att << endl;
	}
	return 0;
}
