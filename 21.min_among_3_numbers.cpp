#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "Give me three numbers." << endl;
	cin >> a >> b >> c;
	cout << "The minimum among the three numbers is " << (a<b? (a<c? a:c) : (b<c? b:c)) << "." << endl;
	return 0;
}
