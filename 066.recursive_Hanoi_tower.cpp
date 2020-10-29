#include <iostream>

using namespace std;

void recursive_hanoi(int n, char from, char to, char tmp) {
	if (n==1) {
		cout << from << "->" << to << endl;
		return;
	}
	recursive_hanoi(n-1, from, tmp, to);
	cout << from << "->" << to << endl;
	recursive_hanoi(n-1, tmp, to, from);
}

int main() {
	int n;
	cout << "Give me a positive integer n, the number of disks: ";
	cin >> n;
	recursive_hanoi(n, 'a', 'c', 'b');
	return 0;
}
