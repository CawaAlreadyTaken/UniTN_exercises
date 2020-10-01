#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me the parameters a, b and c in the equation 'ax^2 + bx + c = 0' and i will find you the solutions." << endl;
	float a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	float x1, x2;
	
	float delta = b*b-4*a*c;
	if (delta < 0) {
		cout << "The equation has no solutions because Delta is negative." << endl;
		return 0;	
	} else if (delta == 0) {
		int x = (-b)/(2*a);
		cout << "The equation has one solution: " << x << " with m = 2." << endl;
		return 0;
	}
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);

	cout.precision(3); //Default precision is 5
	cout << fixed << "The solutions are: " << x1 << " and " << x2 << endl;

	return 0;
}
