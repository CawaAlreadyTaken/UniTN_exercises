#include <iostream>
#include <fstream>
#include "147.stack.h"

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <inputFile>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "File " << argv[1] << " was not found." << endl;
		in.close();
		exit(-1);
	}

	char c;
	init();

	while (in >> c) {
		if (c == '(')
			push(1);
	 	else if (c == ')')
			push(2);
	}

	int k;
	int closed = 0;
	bool balanced = true;

	while (top(k)) {
		if (k == 2) closed++;
		else {
			if (closed > 0) closed--;
			else balanced = false;
		}
		pop();
	}

	if (balanced && closed != 0) {
		balanced = false;
	}

	cout << "Brackets ARE " << (balanced?"":"NOT ") << "balanced." << endl;

	in.close();
	return 0;
}
