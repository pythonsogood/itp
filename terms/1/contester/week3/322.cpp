#include <iostream>

int main() {
    double n;
    std::cin >> n;

	double a = 1/103;

	for (int i=101; i>=1; i-=2) {
	    a = i + (1 / a);
	}

	std::cout << 1/a;

    return 0;
}