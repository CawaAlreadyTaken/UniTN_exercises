#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int def1 = random() % 6 + 1;
	int att1 = random() % 6 + 1;
	int def2 = random() % 6 + 1;
	int att2 = random() % 6 + 1;
	int n_win_att = 0;
	int n_win_def = 0;
	if (max(att1, att2) > max(def1, def2)) {
		n_win_att++;
	} else {
		n_win_def++;
	}
	if (min(att1, att2) > min(def1, def2)) {
		n_win_att++;
	} else {
		n_win_def++;
	}
	cout << "Defender has to remove " << n_win_att << " tanks, while Attacker has to remove " << n_win_def << " tanks." << endl;
	return 0;
}
