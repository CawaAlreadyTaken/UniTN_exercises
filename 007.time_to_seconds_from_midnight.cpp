#include <iostream>

using namespace std;

int main() {
	cout << "Insert the time in the following format: hh:mm:ss, and i will tell you how many seconds have passed from midnight. ";
	string a;
	cin >> a;
	int h = (a[0]-48)*10+(a[1]-48);
	int m = (a[3]-48)*10+(a[4]-48);
	int s = (a[6]-48)*10+(a[7]-48);
	int seconds = h*3600+m*60+s;
	cout << seconds << " seconds have passed." << endl;
	return 0;
}
