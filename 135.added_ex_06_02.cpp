#include <iostream>
#include <fstream>

using namespace std;

struct node{
	int a;
	node * next;
	node * previous;
};

typedef node* list;

void printList(list lista) {
	while (lista->next != NULL) {
		cout << lista->a << endl;
		lista = lista->next;
	}
	cout << lista->a << endl;
}

void deleteList(list lista) {
	list tmp = lista;
	while (lista != NULL) {
		tmp = lista->next;
		delete lista;
		lista = tmp;
	}
}

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
	list lista = new node{i, NULL, NULL};
	list current = lista;
	while(in >> i) {
		list nextNode = new node{i, NULL, NULL};
		current->next = nextNode;
		nextNode->previous = current;
		current = nextNode;
	}
	in.close();

	printList(lista);
	deleteList(lista);

	return 0;
}
