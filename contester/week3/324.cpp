#include <iostream>
#include <cmath>

int main() {
	double a = 0;

	for (int i=1; i<=10; ++i) {
		double an;
		std::cin >> an;
		a += pow(an, i);
	}

	std::cout << a;

    return 0;
}