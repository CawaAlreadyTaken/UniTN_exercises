#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me a positive Integer N. The higher the number, the more precise PI will be." << endl;
	int N;
	cout << "N: ";
	cin >> N;
	double PI = 0;
	for (double i = 1; i <= N; i++) {
		PI+=(1/(i*i));
	}
	PI = sqrt(PI*6);
	cout << "Approximated PI is: " << PI << endl;
	return 0;
}
