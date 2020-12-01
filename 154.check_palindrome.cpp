#include <iostream>
#include "147.stack.h"
#include "152.queue_int.h"

using namespace std;

int main() {
	cout << "Give me a word." << endl;
	char * word = new char[200];
	cin >> word;
	init_s();
	init_q();
	bool end = false;
	for (int i = 0; i < 200 && !end; i++) {
		if (word[i] != '\0') {
			push((int)word[i]);
			enqueue((int)word[i]);
		}
		else end = true;
	}
	delete [] word;	
	int a, b;
	bool check = true;
	while(top(a) && first(b)) {
		if (a != b) check = false;
		pop();
		dequeue();
	}
	cout << "This word IS " << (check?"":"NOT ") << "palindrome." << endl;
	return 0;
}
