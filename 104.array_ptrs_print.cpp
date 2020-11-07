#include <iostream>

using namespace std;

void print(int * a) {
	for (int i = 0; i < 10; i++) {
		cout << *(a+i) << " ";
	}
	cout << endl;
	return;
}

int main() {
	int a[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		*(a+i) = random()%10;
	}
	print(a);
	return 0;
}
