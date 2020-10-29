#include <iostream>

using namespace std;

int main() {
	int i = 14;
	float f = 5.1292;
	double d = 1.12412529;
	cout << "i 14" << endl;
	cout << "f 5.1292" << endl;
	cout << "d 1.12412529" << endl;
	cout << "int + float: " << i+f << endl;
	cout << "float + int: " << f+i << endl;
	cout << "float + double: " << f+d << endl;
	cout << "double + float: " << d+f << endl;
	cout << "int + double: " << i+d << endl;
	cout << "double + int: " << d+i << endl;
	cout << "int - float: " << i-f << endl;
	cout << "float - int: " << f-i << endl;
	cout << "float - double: " << f-d << endl;
	cout << "double - float: " << d-f << endl;
	cout << "int - double: " << i-d << endl;
	cout << "double - int: " << d-i << endl;
	cout << "int * float: " << i*f << endl;
	cout << "float * int: " << f*i << endl;
	cout << "float * double: " << f*d << endl;
	cout << "double * float: " << d*f << endl;
	cout << "int * double: " << i*d << endl;
	cout << "double * int: " << d*i << endl;
	cout << "int / float: " << i/f << endl;
	cout << "float / int: " << f/i << endl;
	cout << "float / double: " << f/d << endl;
	cout << "double / float: " << d/f << endl;
	cout << "int / double: " << i/d << endl;
	cout << "double / int: " << d/i << endl;
	return 0;
}
