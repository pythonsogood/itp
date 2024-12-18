#include <iostream>
#include <cmath>

int main() {
    double x, a;
	int n;
    std::cin >> x >> a >> n;

	double b = pow(x+a, 2);

	for (int i=1; i<n; ++i) {
		b = pow(b+a, 2);
	}

    std::cout << round((b + a) * 1000.0)/1000.0;

    return 0;
}