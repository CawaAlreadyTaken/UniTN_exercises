#include <iomanip>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int n = 0x12345678;
	char * k = (char *)&n;
	for (int i = 0; i < sizeof(n); i++) {
	 	cout << hex << unsigned(k[i]) << endl;
	}
	cout << endl;
	cout << "If first number is '78', then this pc is using little endian notation. Otherwise, if it's '12', it is using big endian notation." << endl;
	return 0;
}
