#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cin >> a;

    double b = 1;

    for (int i=1; i<=a; ++i) {
        b *= (1 + (1.0 / (i*i)));
    }

    std::cout << b;

    return 0;
}