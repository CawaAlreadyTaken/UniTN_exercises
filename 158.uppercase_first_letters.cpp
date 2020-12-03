#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
	if (argc != 3) {
		cout << "Usage: " << argv[0] << " <inputFile> <outputFile>" << endl;
		exit(-1);
	}
	fstream in, out;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "Failed to open " << argv[1] << endl;
		in.close();
		exit(-1);
	}

	char new_text[1000];
	int i = 0;
	bool last = true;
	while(in.get(new_text[i])) {
		if (last) {
			if (new_text[i] >= 'a' && new_text[i] <= 'z') 
				new_text[i]+=('A'-'a');
			last = false;
		}
		if (new_text[i] == '.' || new_text[i] == '?' || new_text[i] == '!') 
			last = true;
		i++;
	}
	in.close();
	out.open(argv[2], ios::out);

	for (int j = 0; j < i; j++) {
		out << new_text[j];
	}
	out << endl;
	out.close();
	cout << "Done." << endl;


	return 0;
}
