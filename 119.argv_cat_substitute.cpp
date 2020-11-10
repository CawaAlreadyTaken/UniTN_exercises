#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 3) {
		cout << "Usage: " << argv[0] << " <filename> <char>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "File not found." << endl;
		return -1;
	}
	char c;
	char sobst = argv[2][0];
	in.get(c);
	while (!in.eof()) {
		if (c == sobst) 
			c = '?';
		cout << c;
		in.get(c);
	}
	cout << endl;
	in.close();
	return 0;
}
