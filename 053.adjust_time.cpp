#include <iostream>

using namespace std;

void adjust_time(int * ptrS, int * ptrM, int * ptrH) {
	if (*ptrS > 59) {
		*ptrM += *ptrS/60;
		*ptrS %= 60;
	}
	if (*ptrM > 59) {
		*ptrH += *ptrM/60;
		*ptrM %= 60;
	}
}

int main() {
	int s, m, h;
	cout << "Give me what time it is: seconds, minutes, hours." << endl;
	cout << "s: ";
	cin >> s;
	cout << "m: ";
	cin >> m;
	cout << "h: ";
	cin >> h;
	adjust_time(&s, &m, &h);
	cout << "s: " << s << ", m: " << m << ", h: " << h << endl;
	return 0;
}
