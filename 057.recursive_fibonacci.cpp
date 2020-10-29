#include <iostream>

using namespace std;

void fibonacci(int n1, int n2, int stop, int deep){
	int tmp = n1+n2;
	cout << tmp << " ";
	if (deep < stop) 
		fibonacci(n2, tmp, stop, deep+1);
	return;
}

int main() {
	int N;
	cout << "Give me a positive integer N greater than 2: ";
	cin >> N;
	cout << "1 1 ";
	fibonacci(1, 1, N, 3);
	cout << endl;
	return 0;
}
