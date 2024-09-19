#include <iostream>

int main() {
    int n;
    std::cin >> n;

	long double a = 1 / n;

	for (int i=n-2; i>0; i-=2) {
		a = 1 / (i + a);
	}

	std::cout << a;

    return 0;
}