#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Inserisci i valori a e b:\n";
	cin >> a >> b;

	int ris = (a-b) * ((a > b) - (b > a));
	cout << ris << endl;

	return 0;
}
