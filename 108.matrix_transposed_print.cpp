#include <iostream>

using namespace std;

const int righe = 10;
const int colonne = 20;

int main() {
	int a[righe][colonne];
	srand(time(NULL));
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			a[i][j] = random()%10;
		}
	}
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < colonne; i++) {
		for (int j = 0; j < righe; j++) {
			cout << a[j][i] << " "; 
		}
		cout << endl;
	}
		
	return 0;
}
