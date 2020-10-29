#include <iostream>
using namespace std;

int main() {
	cout << "Give me Fahrenheit temperature: "; //asking for fahreheit temperature
	float ftemp; cin >> ftemp; //taking fahrenheit temperature
	float ctemp = (ftemp-32)/1.8; //creating the ctemp variable using the formula provided
	cout << "Temperature in Celsius degrees is " << ctemp << endl; //giving output
	return 0;
}
