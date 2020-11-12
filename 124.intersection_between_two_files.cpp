#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

bool find(char words1[], char words2[][100], int it2);
void removeDuplicates(char array[][100], int size);

int main(int argc, char * argv[]) {
	if (argc != 4) {
		cout << "Usage: " << argv[0] << " <inputFile1> <inputFile2> <outputFile>" << endl;
		exit(0);
	}
	fstream in1, in2, out;
	in1.open(argv[1], ios::in);

	char words1[1000][100];
	char words2[1000][100];

	int it1 = 1;
	in1 >> words1[0];
	if (in1.fail()) {
		cout << "Failed to read '" << argv[1] << "'." << endl;
		in1.close();
		exit(0);
	}
	while (!in1.eof()) {
		in1>>words1[it1];
		it1++;
	}
	in1.close();


	in2.open(argv[2], ios::in);
	int it2 = 1;
	in2 >> words2[0];
	if (in2.fail()) {
		cout << "Failed to read '" << argv[2] << "'." << endl;
		in2.close();
		exit(0);
	}
	while (!in2.eof()) {
		in2>>words2[it2];
		it2++;
	}
	in2.close();

	cout << "Into the file '" << argv[3] << "', you will find the list of the words that are both in '" << argv[1] << "' and in '" << argv[2] << "'." << endl;
	out.open(argv[3], ios::out);
	int it3 = 0;
	char output[1000][100];
	for (int i = 0; i < it1; i++) {
		if (find(words1[i], words2, it2)) {
			strcpy(output[it3], words1[i]);
			it3++;
		}
	}

	removeDuplicates(output, it3);

	for (int i = 0; i < it3; i++) {
		char check[100] = {0};
		if (strcmp(output[i], check) != 0)
			out << output[i] << endl;
	}

	out.close();
	return 0;
}

bool find(char words1[], char words2[][100], int it2) {
	bool return_ = false;
	for (int i = 0; i < it2 && !return_; i++) {
		if (strcmp(words1, words2[i]) == 0) return_ = true;
	}
	return return_;
}


void removeDuplicates(char array[][100], int size) {
	char trash[100] = {0};
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++) {
			if (strcmp(array[i], array[j]) == 0) strcpy(array[j], trash);
		}
	}
}


