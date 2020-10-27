#include <iostream>
#include <climits>

using namespace std;

int main() {
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = (int)random()%10+1;
	}
	int min_ = INT_MAX;
	int max_ = INT_MIN;
	int avg = 0;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < 10; i++) {
		avg+=a[i];
		min_ = min(min_, a[i]);
		max_ = max(max_, a[i]);
	}
	cout << endl;
	cout << "Max was " << max_ << ", min was " << min_ << " and mean was " << avg/10 << "." << endl;
	return 0;
}
