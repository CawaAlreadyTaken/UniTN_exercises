#include <iostream>
#include "147.stack.h"
#include "152.queue_int.h"

using namespace std;

int main() {
	init_s();
	init_q();
	int n;
	cout << "Give me a positive integer n. I am inserting 'n' elements in a stack, then queue, then stack again in order to reverse them." << endl;
	cout << "n: ";
	cin >> n;
	if (n <= 0) {
		cout << "n has to be positive!" << endl;
		exit(-1);
	}
	cout << "Give me " << n << " numbers." << endl;
	int v;
	for (int i = 0; i < n; i++) {
		cin >> v;
		push(v);
	}
	cout << "I am inverting them..." << endl;
	int k;
	while (top(k)) {
		enqueue(k);
		pop();
	}
	while (first(k)) {
		cout << k << endl;
		dequeue();
	}
	return 0;
}
