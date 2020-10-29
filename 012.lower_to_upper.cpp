#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me a lowercase character. "; //Asking for the input
	char c; cin >> c; //Taking the input
	cout << "Here you go the uppercase version: " << (char)(c-'a'+'A') << endl; //Printing the lowercase character
	return 0;
}
