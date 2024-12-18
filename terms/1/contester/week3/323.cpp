#include <iostream>

int main() {
    double x;
    std::cin >> x;

    double x_sqr = x * x;

	double a = x_sqr + (256/x_sqr);

	for (int i=128; i>=2; i/=2) {
	    a = x_sqr + (i / a);
	}

	std::cout << x/a;

    return 0;
}