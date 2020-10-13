#include <iostream>

using namespace std;

int main() {
	cout << "Give me a positive integer N. ";
	long long N; cin >> N;
	bool prime[N+1];
	for (int i = 1; i <= N; i++) {
		prime[i] = true;
	}
	prime[1] = false;
	for (int i = 2; i <= N; i++) {
		if (prime[i]) {
			cout << i << " ";
			for (int j = 2; j <= (N/i); j++) {
				prime[i*j] = false;
			}
		}
	}
	cout << endl;

	cout << "These were all the prime numbers between 1 and " << N << "." << endl;
	return 0;
}
