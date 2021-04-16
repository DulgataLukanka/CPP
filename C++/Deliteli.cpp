#include <iostream>
#include <cmath>
using namespace std;

int count_prime_divisors(int n) {
	int d = 0;
    for (int i = 2; i <= sqrt(n); i++) {
    	if (n % i == 0)
			d++;
        while (n % i == 0)
            n /= i;
    }
    if (n > 2)
        d++;
	return d;
}

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (count_prime_divisors(i) == k)
			cout << i << endl;
	}
}
