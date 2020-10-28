#include <iostream>
//I don't understand why, but it looks like i don't actually need to include cstdlib

using namespace std;

int main() {
	char a[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = rand()%26+('a');
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << "=> ";
	for (int i = 0; i < 5; i++) {
		char c = a[i]+3;
		if (c > 'z') {
			c%='z'+1;
			c+='a';
		}
		cout << c << " ";
	}
	cout << endl;
	return 0;
}
