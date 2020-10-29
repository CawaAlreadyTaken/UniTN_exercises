#include <iostream>

using namespace std;

int main() {
	int n; 
	cout << "Give me a positive integer n: ";
	cin >> n;
	string ris = "";
	while(n > 0) {
		int v = n%10;
		if (v == 0) ris = "Zero " + ris;
		else if (v == 1) ris = "Uno " + ris;
		else if (v == 2) ris = "Due " + ris;
		else if (v == 3) ris = "Tre " + ris;
		else if (v == 4) ris = "Quattro " + ris;
		else if (v == 5) ris = "Cinque " + ris;
		else if (v == 6) ris = "Sei " + ris;
		else if (v == 7) ris = "Sette " + ris;
		else if (v == 8) ris = "Otto " + ris;
		else if (v == 9) ris = "Nove " + ris;
		n/=10;
	}
	cout << ris << endl;
	return 0;
}
