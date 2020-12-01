#include <iostream>
#include <fstream>

using namespace std;

int word_to_number(char *);

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <inputFile>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "Failed to open '" << argv[1] << "'." << endl;
		in.close();
		exit(-1);
	}
	char word[10];
	int sum = 0;
	int i = 0;
	while (in >> word) {
		sum += word_to_number(word);
		i++;
	}
	in.close();
	fstream append;
	append.open(argv[1], ios::app);
	for (int l = 0; l < sum/i; l++) {
		append << "*";
	}
	append << " ";
	append.close();
	cout << "Done. check input file." << endl;
	return 0;
}

int word_to_number(char * word) {
	int i = 0;
	while(word[i]!='\0') {
		i++;
	}
	return i;
}
