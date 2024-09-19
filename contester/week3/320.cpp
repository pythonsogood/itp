#include <iostream>
#include <cmath>

int main() {
    double x, a;
	int n;
    std::cin >> x >> a >> n;

	double b = pow(x+a, 2);

	for (int i=1; i<=n; ++i) {
		b = pow(b+a, 2);
	}

    std::cout << b + a;

    return 0;
}