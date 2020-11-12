#include <iostream>
#include <fstream>

using namespace std;

int down(char c) {
	int return_;
	if (c >= 'a' && c <= 'z') {
		return_ = c-'a';
	} else if (c >= 'A' && c <= 'Z') {
		return_ = c-'A';
	} else return_ = 26;
	return return_;
}

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <filename>" << endl;
		exit(0);
	}
	fstream in;
	in.open(argv[1], ios::in);
	int letters[27];
	for (int i = 0; i < 27; i++) {
		letters[i] = 0;
	}
	char c;
	in.get(c);
	if (in.fail()) {
		cout << "Wrong input file." << endl;
		exit(0);
	}
	int h = down(c);
	letters[h]++;
	while (!in.eof()) {
		in.get(c);
		h = down(c);
		letters[h]++;
	}
	for (int i = 0; i < 26; i++) {
		char k = 'a'+i;
		cout << k << ": " << letters[i] << endl;
	}
	cout << endl;
	in.close();
	return 0;
}
