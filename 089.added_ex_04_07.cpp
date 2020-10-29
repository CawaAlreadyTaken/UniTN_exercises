#include <iostream>

using namespace std;

void recursive_counter(int n) {
	cout << n << "    " << flush;
	recursive_counter(n+1);
}

int main() {
	recursive_counter(0);
	return 0;
}
