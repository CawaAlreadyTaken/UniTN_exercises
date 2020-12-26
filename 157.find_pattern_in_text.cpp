#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int pattern[2];
	int text[50];

	for (int i = 0; i < 2; i++) {
		pattern[i] = rand()%10;
	}
	for (int i = 0; i < 50; i++) {
		text[i] = rand()%10;
	}

	cout << "Pattern: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << pattern[i] << " ";
	} cout << endl;
	cout << "Text: " << endl;
	for (int i = 0; i < 50; i++) {
		cout << text[i] << " ";
	} cout << endl;

	bool flag = false;
	for (int i = 0; i < 50-2 && !flag; i++) {
		flag = true;
		for (int j = 0; j < 2 && flag; j++) {
			if (text[i+j]!=pattern[j]) flag = false;
		}
	}

	cout << "Pattern is " << (flag?"":"NOT ") << "into the text." << endl;

	return 0;
}
