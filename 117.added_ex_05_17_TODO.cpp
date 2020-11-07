#include <iostream>

using namespace std;

const int righe = 12;
const int colonne = 12;

//I will make it 12x12 so i don't have to deal with edges

int check_cell(const int a[][colonne], int riga, int colonna) {
	int oriz[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int vert[] = {-1, 0, 1, -1, 1, -1, 0, 1};
	for (int i = 0; i < 8; i++) {
		if (a[riga+oriz[i]][colonna+vert[i]] == 1)
			return 0;
	}
	cout << "(" << riga << ", " << colonna << ")" << endl;
	return 1;
}

int main() {
	int a[righe][colonne];
	srand(time(NULL));
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			a[i][j] = random()%2;
		}
	}
	for (int i = 0; i < righe; i++) {
		a[i][0] = 0;
		a[i][colonne-1] = 0;
	}
	for (int i = 0; i < colonne; i++) {
		a[0][i] = 0;
		a[righe-1][i] = 0;
	}
	//I am rewriting corners but whatever
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
	cout << endl;
	int islands = 0;
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			if (a[i][j]==1)
				islands += check_cell(a, i, j);
		}
	}
	if (islands == 1) 
		cout << "There is 1 'island'." << endl;
	else
		cout << "There are " << islands << " 'islands'." << endl;
	return 0;
}
