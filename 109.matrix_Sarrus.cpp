#include <iostream>

using namespace std;

const int righe = 3;
const int colonne = 3;

int bot_right(const int a[][colonne], int n) {
	int ris = 1;
	for (int i = 0, j = 0; i < righe; i++, j++) {
		int colonna = j+n;
		if (colonna >= colonne) {
			colonna%=colonne;
		}
		ris*=a[i][colonna];
	}
	return ris;
}

int bot_left(const int a[][colonne], int n) {
	int ris = 1;
	for (int i = 0, j = 0; i < righe; i++, j++) {
		int colonna = n-j;
		if (colonna < 0) {
			colonna+=colonne;
		}
		ris*=a[i][colonna];
	}
	return ris;
}

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
	int n;
	cout << "Give me the number of column where you want to start the multiplication bottom-right [0-2]: ";
	cin >> n;
	int ris = bot_right(a, n);
	cout << "Result: " << ris << endl;
	cout << "Give me the number of column where you want to start the multiplication bottom-left [0-2]: ";
	cin >> n;
	ris = bot_left(a, n);
	cout << "Result: " << ris << endl;
	int determinant = 0;
	for (int i = 0; i < colonne; i++) {
		determinant+=bot_right(a, i);
	}
	for (int i = 0; i < colonne; i++) {
		determinant-=bot_left(a, i);
	}
	cout << "Determinant: "	<< determinant << endl;
	return 0;
}
