#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv []) {
	if (argc != 4) {
		cout << "Usage: " << argv[0] << " <n1> <operation> <n2>" << endl;
		exit(0);
	}
	float n1 = atof(argv[1]);
	float n2 = atof(argv[3]);
	char operation = argv[2][0];
	if (operation == '+') {
		cout << "Result is " << n1+n2 << endl;
	} else if (operation == '-') {
		cout << "Result is " << n1-n2 << endl;
	} else if (operation == 'x') {
		cout << "Result is " << n1*n2 << endl;
	} else if (operation == '/') {
		cout << "Result is " << n1/n2 << endl;
	} else {
		cout << "Unknown operation symbol. " << endl;
	}
	return 0;
}
