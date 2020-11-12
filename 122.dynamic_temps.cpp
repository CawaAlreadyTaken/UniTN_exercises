#include <iostream>
#include <cstdlib>

using namespace std;

void sort_array(float array[], int length);

float * generate_array(int n, float temp[]) {
	float * a = new float[n];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}
	sort_array(a, n);
	delete [] temp;
	return a;
}

void sort_array(float array[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length-1; j++) {
			if (array[j] > array[j+1]) {
				swap(array[j], array[i]);
			}
		}
	}
}

int main(int argc, char * argv[]) {
	srand(time(NULL));
	int n;
	if (argc < 2) {
		cout << "Usage: " << argv[0] << " <temp1> ..." << endl;
		exit(0);
	}
	
	n = argc-1;
	float * temp = new float[n];
	for (int i = 0; i < argc-1; i++) {
		temp[i] = atof(argv[i+1]);
	}
	float * a = generate_array(n, temp);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	
	delete [] a;

	cout << endl;
	return 0;
}
