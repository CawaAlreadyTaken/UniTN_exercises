#include <iostream>
#include <cstdlib>

using namespace std;

void sort_three(int & a, int & b, int & c) {
        int tmp = min(a, b);
        a = max(a, b);
        b = tmp;
        tmp = min(a, c);
        a = max(a, c);
        c = tmp;
        tmp = min(b, c);
        b = max(b, c);
        c = tmp;
        return;
}


int main() {
	srand(time(NULL));
	int a1, a2, a3;
	int d1, d2, d3;
	a1 = rand() % 6 + 1;
	a2 = rand() % 6 + 1;
	a3 = rand() % 6 + 1;
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	d3 = rand() % 6 + 1;
	sort_three(a1, a2, a3);
	sort_three(d1, d2, d3);
	int vA = 0;
	int vD = 0;
	if (a1 > d1) vA++;
	else vD++;
	if (a2 > d2) vA++;
	else vD++;
	if (a3 > d3) vA++;
	else vD++;
	cout << "Attacker won " << vA << " times, while defender won " << vD << " times." << endl;
	return 0;
}
