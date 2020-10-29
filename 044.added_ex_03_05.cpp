#include <iostream>

using namespace std;

int main() {
	long long n;
	cout << "Give me a positive integer n: ";
	cin >> n;
	int f0 = 0;
	int f1 = 0;
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	int f5 = 0;
	int f6 = 0;
	int f7 = 0;
	int f8 = 0;
	int f9 = 0;
	while(n>0) {
		int h = n%10;
		if (h == 0) f0++;
		else if (h == 1) f1++;
		else if (h == 2) f2++;
		else if (h == 3) f3++;
		else if (h == 4) f4++;
		else if (h == 5) f5++;
		else if (h == 6) f6++;
		else if (h == 7) f7++;
		else if (h == 8) f8++;
		else if (h == 9) f9++;
		n/=10;
	}
	cout << "Frequency of 0 : " << f0 << endl;
	cout << "Frequency of 1 : " << f1 << endl;
	cout << "Frequency of 2 : " << f2 << endl;
	cout << "Frequency of 3 : " << f3 << endl;
	cout << "Frequency of 4 : " << f4 << endl;
	cout << "Frequency of 5 : " << f5 << endl;
	cout << "Frequency of 6 : " << f6 << endl;
	cout << "Frequency of 7 : " << f7 << endl;
	cout << "Frequency of 8 : " << f8 << endl;
	cout << "Frequency of 9 : " << f9 << endl;
	return 0;
}
