#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Give me an uppercase character. "; //Asking for the input
	char c; cin >> c; //Taking the input
	cout << "Here you go the lowercase version: " << (char)(c-'A'+'a') << endl; //Printing the lowercase character
	return 0;
}
