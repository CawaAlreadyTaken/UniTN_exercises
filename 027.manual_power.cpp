#include <iostream>

using namespace std;

int main() {
	cout << "Give me positive float x and positive int N." << endl;
	float x;
	int N;
	cout << "x: ";
	cin >> x;
	cout << "N: ";
	cin >> N;
	float pow = 1;
	for (int i = 0; i < N; i++) {
		pow*=x;
	}
	cout << "Here you are x to the N: " << pow << endl;
	return 0;
}
