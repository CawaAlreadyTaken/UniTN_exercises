#include <iostream>
#include <cstdlib>

using namespace std;

void drawGrid(int grid[][6]);

void checkWin(int grid[][6], int Player, int grid1[][6], int grid2[][6]) {
	bool won = true;
	for (int i = 0; i < 6 && won; i++) {
		for (int j = 0; j < 6 && won; j++) {
			if (grid[i][j] == 1)
				won = false;
		}
	}	
	if (won) {
		cout << "P" << Player << " WON!" << endl;
		cout << "P1:" << endl;
		drawGrid(grid1);
		cout << "P2:" << endl;
		drawGrid(grid2);
		exit(0); //I mean ok i should not use exit here, but as far as my goal is to make the code more readable, i think this 
					//actually IS the cleanest way. I am going to cry during the exam. Also, have a nice day.
	}

}

void drawGrid(int grid[][6]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (grid[i][j] == 0) {
				cout << "- ";
			} else if (grid[i][j] == 1) {
				cout << "□ ";
			} else if (grid[i][j] == 2) {
				cout << "X ";
			} else if (grid[i][j] == -1) {
				cout << "O ";
			}
		}
		cout << endl;
	}
}

void setupGridTries(int grid[][6]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			grid[i][j] = 0;
		}
	}
}

void setupGrid(int grid[][6]) {
	//setting it to 0s
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			grid[i][j] = 0;
		}
	}
	//I will draw 2 boats: one of length 2 and the other with length 3
	int x1, y1; //coordinates of first boat
	int orientation1 = random()%2;
	if (orientation1 == 0) { //horiz
		x1 = random()%5;
		y1 = random()%6;
		grid[y1][x1] = 1;
		grid[y1][x1+1] = 1;
	} else { //vert
		x1 = random()%6;
		y1 = random()%5;
		grid[y1][x1] = 1;
		grid[y1+1][x1] = 1;
	}

	int x2, y2; //coordinates of second boat
	bool notPlaced = true; //gotta while, since the two boats could cross each other
	int orientation2;
	while (notPlaced) {
		notPlaced = false;
		orientation2 = random()%2;
		if (orientation2 == 0) { //horiz
			x2 = random()%4;
			y2 = random()%6;
			for (int i = 0; i < 3; i++) {
				if (grid[y2][x2+i] == 1) notPlaced = true;
			}
		} else { //vert
			x2 = random()%6;
			y2 = random()%4;
			for (int i = 0; i < 3; i++) {
				if (grid[y2+i][x2] == 1) notPlaced = true;
			}
		}
		if (!notPlaced) {
			if (orientation2 == 0) {
				grid[y2][x2] = 1;
				grid[y2][x2+1] = 1;
				grid[y2][x2+2] = 1;
			} else {
				grid[y2][x2] = 1;
				grid[y2+1][x2] = 1;
				grid[y2+2][x2] = 1;
			}
		}

	}


}

int main() {
	srand(time(NULL));
	char bin[1000];
	int grid1[6][6];
	int grid2[6][6];
	int gridTries1[6][6];
	int gridTries2[6][6];
	setupGrid(grid1);
	setupGrid(grid2);
	setupGridTries(gridTries1);
	setupGridTries(gridTries2);
	cout << "P1:" << endl;
	drawGrid(grid1);
	cout << "Enter anything when you are ready." << endl;
	cin >> bin;
	for (int i = 0; i < 100; i++) cout << endl;
	cout << "Give the screen to P2. Enter anything if you are P2." << endl;
	cin >> bin;
	for (int i = 0; i < 100; i++) cout << endl;
	cout << endl << "P2:" << endl;
	drawGrid(grid2);
	cout << endl;
	cout << "Enter anything when you are ready." << endl;
	cin >> bin;
	for (int i = 0; i < 100; i++) cout << endl;
	cout << "Give the screen to P1. Enter anything if you are P1." << endl;
	cin >> bin;
	for (int i = 0; i < 100; i++) cout << endl;

	bool gameAlive = true;
	while (gameAlive) {
		int x, y;
		cout << "P1's turn." << endl;
		cout << "Your grid:" << endl;
		drawGrid(grid1);
		cout << "Your tries:" << endl;
		drawGrid(gridTries1);
		cout << endl;
		cout << "'X' means HIT there, while 'O' means there was a try but it failed." << endl;
		bool choice1 = false;
		while(!choice1) {
			cout << "Tell me the cell you want to shoot at." << endl;
			cout << "x) ";
			cin >> x;
			if (cin.fail()) {
				cout << "Not a valid number." << flush << endl;
				cin.clear();
				cin.ignore(1000000, '\n');
				x = -1;
			}
			if (x < 0 || x > 5) {
				cout << "x out of range." << endl;
			} else choice1 = true;
			bool choice2 = true;
			if (choice1) choice2 = false;
			while(!choice2) {
				cout << "y) ";
				cin >> y;
				if (cin.fail()) {
					cout << "Not a valid number." << flush << endl;
					cin.clear();
					cin.ignore(1000000, '\n');
					y = -1;
				}
				if (y < 0 || y > 5) {
					cout << "y out of range." << endl;
				} else if (gridTries1[y][x]!=0) {
					cout << "You have already tried there!" << endl;
					choice1 = false;
					choice2 = true;
				} else {
					choice2 = true;
				}
			}
			if (choice1) {
				if (grid2[y][x] == 1) {
					cout << "HIT!" << endl;
					grid2[y][x] = 2;
					gridTries1[y][x] = 2;
				} else if (grid2[y][x] == 0) {
					cout << "Nothing hit." << endl;
					grid2[y][x] = -1;
					gridTries1[y][x] = -1;
				}
			}
		}
		checkWin(grid2, 1, grid1, grid2);
		cout << "Enter anything when you are done." << endl;
		cin >> bin;
		for (int i = 0; i < 100; i++) cout << endl;
		cout << "Give the screen to P2. Enter anything if you are P2." << endl;
		cin >> bin;
		for (int i = 0; i < 100; i++) cout << endl;
		cout << "P2's turn." << endl;
		cout << "Your grid:" << endl;
		drawGrid(grid2);
		cout << "Your tries:" << endl;
		drawGrid(gridTries2);
		cout << endl;
		choice1 = false;
		cout << "'X' means HIT there, while 'O' means there was a try but it failed." << endl;
		while(!choice1) {
			cout << "Tell me the cell you want to shoot at." << endl;
			cout << "x) ";
			cin >> x;
			if (cin.fail()) {
				cout << "Not a valid number." << flush << endl;
				cin.clear();
				cin.ignore(1000000, '\n');
				x = -1;
			}
			if (x < 0 || x > 5) {
				cout << "x out of range." << endl;
			} else choice1 = true;
			bool choice2 = true;
			if (choice1) choice2 = false;
			while(!choice2) {
				cout << "y) ";
				cin >> y;
				if (cin.fail()) {
					cout << "Not a valid number." << flush << endl;
					cin.clear();
					cin.ignore(1000000, '\n');
					y = -1;
				}
				if (y < 0 || y > 5) {
					cout << "y out of range." << endl;
				} else if (gridTries2[y][x]!=0) {
					cout << "You have already tried there!" << endl;
					choice1 = false;
					choice2 = true;
				} else {
					choice2 = true;
				}
			}
			if (choice1) {
				if (grid1[y][x] == 1) {
					cout << "HIT!" << endl;
					grid1[y][x] = 2;
					gridTries2[y][x] = 2;
				} else if (grid1[y][x] == 0) {
					cout << "Nothing hit." << endl;
					grid1[y][x] = -1;
					gridTries2[y][x] = -1;
				}
			}
		}
		checkWin(grid1, 2, grid1, grid2);
		cout << "Enter anything when you are done." << endl;
		cin >> bin;
		for (int i = 0; i < 100; i++) cout << endl;
		cout << "Give the screen to P1. Enter anything if you are P1." << endl;
		cin >> bin;
		for (int i = 0; i < 100; i++) cout << endl;
	}
	return 0;
}




















