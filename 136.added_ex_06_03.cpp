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

void remove(list &lista, int n) {
	if (lista->a == n) {
		list tmp = lista;
		lista = lista->next;
		delete tmp;
		return;
	}
	list tmp = lista;
	while (tmp->next != NULL) {
		if (tmp->next->a == n) {
			list tmp1 = tmp->next;
			if (tmp->next->next != NULL) {
				tmp->next = tmp->next->next;
			} else {
				tmp->next = NULL;
			}
			delete tmp1;
			return;
		}
		tmp = tmp->next;
	} 
	//it doesn't free memory here
	cout << "Could not find element " << n << endl;
	deleteList(lista);
	exit(-1);
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

	cout << "Give me the number to remove: ";
	int n; cin >> n;

	remove(lista, n);

	printList(lista);

	deleteList(lista);

	return 0;
}
