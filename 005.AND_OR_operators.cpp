#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//I don't think this program needs to be commented
	cout << "AND:" << endl;
	cout << "true AND true: " << (true && true) << endl;
	cout << "true AND false: " << (true && false) << endl;
	cout << "false AND true: " << (false && true) << endl;
	cout << "false AND false: " << (false && false) << endl;

	cout << "OR:" << endl;
	cout << "true OR true: " << (true || true) << endl;
	cout << "true OR false: " << (true || false) << endl;
	cout << "false OR true: " << (false || true) << endl;
	cout << "false OR false: " << (false || false) << endl;
	return 0;
}
