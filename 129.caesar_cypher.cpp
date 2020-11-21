#include <iostream>
#include <fstream>
#include "129.crypt_decrypt_functions.h"

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 4) {
		cout << "Usage: " << argv[0] << " <inputFile> <outputFile> <key[1-26]>" << endl;
		exit(1);
	}
	int key = atoi(argv[3]);
	char word[100];
	fstream in, out;
	in.open(argv[1], ios::in);
	in >> word;
	if (in.fail()) {
		cout << "Input file not found." << endl;
		exit(1);
	}
	if (key  < 1 || key > 26) {
		cout << "Key must be an integer between 1 and 26" << endl;
		exit(1);
	}
	in.close();
	char ans = 'a';
	while (ans!='c'&&ans!='d') {
		cout << "Would you like to crypt or decrypt the message? [c/d]: " << endl;
		cin >> ans;
		if (ans!='c'&&ans!='d') cout << "Unknown option." << endl;
	}

	extern char output[100];

	if (ans == 'c') {
		crypt(word, key);
	} else {
		decrypt(word, key);
	}
	out.open(argv[2], ios::out);
	out << output;
	out.close();
	cout << "Done." << endl;
	return 0;
}
