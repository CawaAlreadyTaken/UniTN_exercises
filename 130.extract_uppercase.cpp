#include <iostream>
#include "130.extract.h"

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <string>" << endl;\
		exit(0);
	}
	int last = extract(argv[1], 0, 81);

	cout << "The upperCase letters I extracted are: " << endl;
	for (int i = 81; i < last; i++) {
		cout << argv[1][i];
	} cout << endl;
	return 0;
}
