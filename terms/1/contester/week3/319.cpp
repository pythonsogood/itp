#include <iostream>
#include <cmath>

unsigned long long factorial(int n) {
    unsigned long long a = 1;
    for (int i=1; i<n; ++i) {
        a *= i+1;
    }
	return a;
}

int main() {
    double x;
    std::cin >> x;

	double a = 0;
	bool sum = true;

	for (int i=1; i<=13; i+=2) {
		int sign = sum ? 1 : -1;
		a += sign * ((pow(x, i))/(factorial(i)));
		sum = !sum;
	}

    std::cout << a;

    return 0;
}