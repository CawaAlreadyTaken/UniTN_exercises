#include <iostream>
using namespace std;

int main() {
	cout << "Give me two numbers. I will divide the first one by the second one. "; //Asking for two numbers.
	int a, b; cin >> a >> b; //Taking the two numbers
	cout << "Result: " << a/b << ", with a reminder of " << a%b << endl; //giving output
	return 0;
}
