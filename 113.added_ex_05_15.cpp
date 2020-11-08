#include <iostream>

using namespace std;

const int righe = 12;
const int colonne = 12;

//I will make it 12x12 so i don't have to deal with edges

void check_cell(const int a[][colonne], bool checked[][colonne], int riga, int colonna) {
	int oriz[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int vert[] = {-1, 0, 1, -1, 1, -1, 0, 1};
	for (int i = 0; i < 8; i++) {
		if (a[riga+oriz[i]][colonna+vert[i]] == 1 && !checked[riga+oriz[i]][colonna+vert[i]]) {
			checked[riga+oriz[i]][colonna+vert[i]] = true;
			check_cell(a, checked, riga+oriz[i], colonna+vert[i]);
		} 
	}
}

int main() {
	int a[righe][colonne];
	bool checked[righe][colonne];
	srand(time(NULL));
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			a[i][j] = random()%2;
			checked[i][j] = false;
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
	//I am using another way to draw islands instead of 1s and 0s, otherwise i couldn't understand a thing in the map. O.o
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			if (a[i][j] == 1) cout << "□ ";
			else cout << "  "; 
		}
		cout << endl;
	}
	cout << endl;
	int islands = 0;
	for (int i = 1; i < righe-1; i++) {
		for (int j = 1; j < colonne-1; j++) {
			if (a[i][j]==1 && !checked[i][j]) {
				check_cell(a, checked, i, j);
				islands++;
			}
		}
	}
	if (islands == 1) 
		cout << "There is 1 group of 'islands'." << endl;
	else
		cout << "There are " << islands << " groups of 'islands'." << endl;
	return 0;
}
