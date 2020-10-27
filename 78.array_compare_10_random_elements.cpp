#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++) {
		a[i] = (int)random()%10+1;
		b[i] = (int)random()%10+1;
	}
	int tot = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] == b[i]) tot++;
	}
	if (tot == 1) cout << "Into the two random generated arrays, there was 1 pair of equal numbers (at the same index)." << endl;
	else cout << "Into the two random generated arrays, there were " << tot << " pairs of equal numbers (at the same indexes)." << endl;
	return 0;
}
