#include <iostream>

using namespace std;

const int n = 3;
const int how_many_to_win = 3;

void draw_grid(int a[][n]);

bool wins(int a[][n], int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == k) {
				bool possible = true;
				for (int v = 0; v < how_many_to_win && possible; v++) {
					if (j+v < n) {
						if (a[i][j+v] != k)
							possible = false;
						else if (v == how_many_to_win-1) {
							draw_grid(a);
							cout << "P" << (k==1?1:2) << " WON!" << endl;	
							return true;
						}
					}
				}
				possible = true;
				for (int v = 0; v < how_many_to_win && possible; v++) {
					if (i+v < n) {
						if (a[i+v][j] != k)
							possible = false;
						else if (v == how_many_to_win-1) {
							draw_grid(a);
							cout << "P" << (k==1?1:2) << " WON!" << endl;	
							return true;
						}
					}
				}
				possible = true;
				for (int v = 0; v < how_many_to_win && possible; v++) {
					if (i+v < n && j+v < n) {
						if (a[i+v][j+v] != k)
							possible = false;
						else if (v == how_many_to_win-1) {
							draw_grid(a);
							cout << "P" << (k==1?1:2) << " WON!" << endl;	
							return true;
						}
					}
				}
				possible = true;
				for (int v = 0; v < how_many_to_win && possible; v++) {
					if (i-v >= 0 && j+v < n) {
						if (a[i-v][j+v] != k)
							possible = false;
						else if (v == how_many_to_win-1) {
							draw_grid(a);
							cout << "P" << (k==1?1:2) << " WON!" << endl;	
							return true;
						}
					}
				}
			}

		}
	}
	return false;
}

void draw_grid(int a[][n]) {
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << " ";
			if (a[i][j] == 1) cout << "X";
			else if (a[i][j] == 2) cout << "O";
			else cout << " ";
			cout << " ";
			//Trying to make it look fancy
			if (j < n-1) cout << "|";
		}
		if (i < n-1) cout << endl << "-----------" << endl;
	}
	cout << endl;
	cout << endl;
}

//I am sorry if this looks shitty but it looks like we cannot use break nor continue :D
//BTW, it works.

int main() {
	int free_spots = n*n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
	int p = 1;
	bool gameOver = false;
	while(!gameOver && free_spots > 0) {
		draw_grid(a);
		int r;
		int c;
		if (p == 1) {
			bool choice1 = false;
			while(!choice1) {
				cout << "P1's turn (X). Insert row r and column c." << endl;
				cout << "r) ";
				cin >> r;
				if (cin.fail()) {
					cout << "Not a valid number." << flush << endl;
					cin.clear();
					cin.ignore(1000000, '\n');
					r = -1;
				}
				if (r < 0 || r > 2) {
					cout << "r out of range." << endl;
				} else choice1 = true;
				bool choice2 = true;
			  	if (choice1) choice2	= false;
				while(!choice2) {
					cout << "c) ";
					cin >> c;
					if (cin.fail()) {
						cout << "Not a valid number." << flush << endl;
						cin.clear();
						cin.ignore(1000000, '\n');
						c = -1;
					}
					if (c < 0 || c > 2) {
						cout << "c out of range." << endl;
					} else if (a[r][c]!=0) {
						cout << "Chosen chell is not empty." << endl;
						choice1 = false;
						choice2 = true;
					} else {
						choice2 = true;
					}
				}
				if (choice1) {
					a[r][c] = 1;
					gameOver = wins(a, 1);
					p = 2;
					free_spots--;
				}
			}
		} else {
			bool choice1 = false;
			while(!choice1) {
				cout << "P2's turn (O). Insert row r and column c." << endl;
				cout << "r) ";
				cin >> r;
				if (cin.fail()) {
					cout << "Not a valid number." << flush << endl;
					cin.ignore(1000000, '\n');
					cin.clear();
					r = -1;
				}
				if (r < 0 || r > 2) {
					cout << "r out of range." << endl;
				} else choice1 = true;
				bool choice2 = true;
			  	if (choice1) choice2	= false;
				while(!choice2) {
					cout << "c) ";
					cin >> c;
					if (cin.fail()) {
						cout << "Not a valid number." << flush << endl;
						cin.clear();
						cin.ignore(1000000, '\n');
						c = -1;
					}
					if (c < 0 || c > 2) {
						cout << "c out of range." << endl;
					} else if (a[r][c]!=0) {
						cout << "Chosen chell is not empty." << endl;
						choice1 = false;
						choice2 = true;
					} else {
						choice2 = true;
					}
				}
				if (choice1) {
					a[r][c] = 2;
					gameOver = wins(a, 2);
					p = 1;
					free_spots--;
				}
			}
		}
	}
	if (!gameOver) {
		draw_grid(a);
		cout << "DRAW!" << endl;
	} 
	return 0;
}
