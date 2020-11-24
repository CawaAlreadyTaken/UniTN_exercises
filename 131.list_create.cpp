#include <iostream>
#include <fstream>

using namespace std;

struct node{
	int a;
	node * next;
};

typedef node* list;

int main(int argc, char * argv[]) {
	int i;
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <inputFile>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	in >> i;
	if (in.fail()) {
		cout << "Can't load " << argv[1] << ". File does not exist or it is not a list of integers." << endl;
		in.close();
		exit(-1);
	}
	list lista = new node{i, NULL};
	list current = lista;
	while(!in.eof()) {
		in >> i;
		list nextNode = new node{i, NULL};
		current->next = nextNode;
		current = nextNode;
	}
	in.close();
	return 0;
}
