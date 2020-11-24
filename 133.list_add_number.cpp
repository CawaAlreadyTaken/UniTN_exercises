#include <iostream>
#include <fstream>

using namespace std;

struct node{
	int a;
	node * next;
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

void insert(list &lista, int n, int v) {
	if (v == 0) {
		list new_ = new node{n, lista};
		lista = new_;
		return;
	}
	list tmp = lista;
	while (--v) {
		tmp = tmp->next;
	}	
	list new_ = new node{n, tmp->next};
	tmp->next = new_;
}

int main(int argc, char * argv[]) {
	int i;
	int list_size = 1;
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
	while(in >> i) {
		list_size++;
		list nextNode = new node{i, NULL};
		current->next = nextNode;
		current = nextNode;
	}
	in.close();

	printList(lista);

	cout << "Give me n, the number I have to insert, and v, the index at which n will be inserted." << endl;
	cout << "n: ";
	int n; cin >> n;
	cout << "v: ";
	int v; cin >> v;
	if (v < 0) {
		cout << "Error: v < 0." << endl;
		exit(-1);
	}
	if (v > list_size) {
		cout << "Error: v can't be greater than the list size." << endl;
		exit(-1);
	}

	insert(lista, n, v);

	printList(lista);

	deleteList(lista);

	return 0;
}
