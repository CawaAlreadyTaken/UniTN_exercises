#include <iostream>
#include <fstream>
#include "150.queue.h"

using namespace std;

void add_person();
void delete_first();
void print_current();
void quit();

int main(int argc, char * argv[]) {
	if (argc != 2) {
		cout << "[!] Usage: " << argv[0] << " <inputFile>" << endl;
		exit(-1);
	}
	fstream in;
	in.open(argv[1], ios::in);
	if (in.fail()) {
		cout << "[!] File " << argv[1] << " not found." << endl;
		in.close();
		exit(-1);
	}

	cout << "[*] File imported." << endl;

	init_q();

	char name[100];
	while (in >> name) {
		enqueue(name);
	}
	in.close();

	while (true) {

		cout << "[*] Choose operation:" << endl;
		cout << "\t(1) Add person" << endl;
		cout << "\t(2) Delete first person" << endl;
		cout << "\t(3) Print current queue" << endl;
		cout << "\t(4) Quit" << endl;
		cout << "\t[?] Choose [1-4]: ";
	
		int choice; cin >> choice;

		if (choice == 1) {
			add_person();
		} else if (choice == 2) {
			delete_first();
		} else if (choice == 3) {
			print_current();
		} else if (choice == 4) {
			quit();
			exit(-1);
		} else {
			cout << "[!] Unavailable choice." << endl;
		}
	}
	return 0;
}

void add_person() {
	cout << "[?] Tell me the name to enqueue: ";
	char name[100];
	cin >> name;
	enqueue(name);
	cout << "[*] Done" << endl;
}

void delete_first() {
	if (!dequeue()) {
		cout << "[!] Queue already empty" << endl;
	} else {
		cout << "[*] Deleted." << endl;
	}
}

void print_current() {
	print();
}

void quit() {
	char * name = new char[100];
	while(first(name)) {
		dequeue();
	}
	delete [] name;
}
