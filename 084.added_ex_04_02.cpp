#include <iostream>

using namespace std;

long long cache[10000][10000];

long long recursive_pascal(int c, int l) {
	long long return_;
	if (c < 0 || c > l) {
		return_ = 0;	
	} else if (cache[c][l] != -1) {
		return_ = cache[c][l];
	} else if (c == 0 && l == 0) {
		return_ = 1;
	} else {
		return_ = recursive_pascal(c-1, l-1) + recursive_pascal(c, l-1);
	}
	if (return_ != 0) 
		cache[c][l] = return_;
	return return_;
}

int main() {
	int l;
	cout << "Give me the number of line (l): ";
	cin >> l;
	if (l < 1) {
		cout << "l must be greater than 0.";
		return -1;
	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10000; j++) {
			cache[i][j] = -1;
		}
	}
	cout << "Here it is Pascal's triangle up to line number " << l << endl;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << recursive_pascal(j, i) << " ";
		}
		cout << endl;
	}
	return 0;
}

