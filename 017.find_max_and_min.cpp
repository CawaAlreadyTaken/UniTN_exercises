#include <iostream>

using namespace std;

int main() {
	cout << "Insert a, b:\n";
	int a, b; cin >> a >> b;
	int max = a*(a>b)+b*(b>=a);
	int min = a*(a<b)+b*(b<=a);
	cout << "Max = " << max << " and Min = " << min << endl;
	return 0;
}
