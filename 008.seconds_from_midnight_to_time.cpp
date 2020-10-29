#include <iostream>

using namespace std;

int main() {
	cout << "Insert how many seconds from midnight have passed and i will tell you what time it is. ";
	int seconds; cin >> seconds;
	int h = seconds/3600;
	seconds%=3600;
	int m = seconds/60;
	seconds%=60;
	int s = seconds;
	cout << "It's ";
	if (h<10) cout << 0;
	cout << h << ":";
	if (m<10) cout << 0;
	cout << m << ":";
	if (s<10) cout << 0;
	cout << s << endl;
	return 0;
}
