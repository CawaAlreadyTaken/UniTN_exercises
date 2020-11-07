#include <iostream>

using namespace std;

bool ordered(int a[]) {
	bool return_ = true;
	for (int i = 0; i < 9; i++) {
		if (a[i] > a[i+1]) {
			return_ = false;
		}
	}
	return return_;
}

void randomSort(int a[]) {
	if(ordered(a)) return;
	else {
		int j = random()%10;
		int k = random()%10;
		swap(a[j], a[k]);
	}
	randomSort(a);
}

int main() {
	srand(time(NULL));
	cout << "This is the array." << endl;
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = random()%10;
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "I will try to order it by random sort, also known as stupid sort. This might segfault because of too many recursion." << endl;
	cout << "Calculating..." << endl;
	randomSort(a);
	cout << "You were lucky! Here it is your sorted array:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
