#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <filename>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "File not found." << endl;
		return -1;
	}
	char c;
	in.get(c);
	while (!in.eof()) {
		cout << c;
		in.get(c);
	}
	cout << endl;
	in.close();
	return 0;
}
