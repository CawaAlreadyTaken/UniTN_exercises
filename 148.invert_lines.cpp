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
		cout << "File " << argv[1] << " was not found or it was not a list of integers." << endl;
		in.close();
		exit(-1);
	}

	int n;

	init();
	while (in >> n) {
		push(n);
	}

	int k;
	while (top(k)) {
		cout << k << endl;
		pop();
	}

	in.close();
	return 0;
}
