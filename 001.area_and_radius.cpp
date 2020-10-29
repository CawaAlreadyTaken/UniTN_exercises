#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me radius. " << endl;  //asking for radius
	int r; cin >> r; //taking integer radius as input
	double a; double c;
	cout << "Area is: " << M_PI * r * r << endl; //printing area (PI*r^2)
	cout << "Circumference is " << 2 * M_PI * r << endl; //printing circumference (2*PI*r)
	return 0;
}
