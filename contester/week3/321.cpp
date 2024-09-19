#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cin >> x;

	double a = 1;
	double b = 1;

	for (int i=2; i<=64; i*=2) {
		a *= (x-i);
		b *= (x-(i-1));
	}

    std::cout << a/b;

    return 0;
}