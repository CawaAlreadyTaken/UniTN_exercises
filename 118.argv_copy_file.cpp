#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 3) {
		cout << "Usage: " << argv[0] << " <filename_input> <filename_output>" << endl;
		exit(-1);
	}
	fstream in, out;
	in.open(argv[1], ios::in);
	out.open(argv[2], ios::out);
	if (in.fail()) {
		cout << "File not found." << endl;
		return -1;
	}
	char c;
	in.get(c);
	while (!in.eof()) {
		out << c;
		in.get(c);
	}
	cout << "Done." << endl;
	in.close();
	out.close();
	return 0;
}
