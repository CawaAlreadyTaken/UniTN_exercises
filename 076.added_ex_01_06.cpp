#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double l;
	cout << "Give me the length of l, the edge of an exhagon: ";
	cin >> l;
	cout << "Area is " << (3.0/2.0)*l*l*sqrt(3) << endl;
	cout << "Perimeter is " << 6*l << endl;
	return 0;
}
