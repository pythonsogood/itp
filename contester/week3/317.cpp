#include <iostream>

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double c = 1.0/a;

    for (int i=1; i<=n; ++i) {
		double b = a;
		for (int j=1; j<=i; ++j) {
			b *= a+j;
		}
        c += 1/b;
    }

    std::cout << c;

    return 0;
}