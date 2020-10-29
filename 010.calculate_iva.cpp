#include <iostream>

using namespace std;

int main() {
	double prezzo, iva;
	cout << "Tell me the price you want me to calculate the \"iva\" for. ";
	cin >> prezzo;
	cout << "Tell me the \"iva\" percentage you want. ";
	cin >> iva;
	prezzo += (prezzo*iva)/100;
	cout << "Here is the new price: " << prezzo << " euros." << endl;
	return 0;
}
