#include <iostream>
#include <cmath>

int main() {
    double a,b,c;
    std::cin >> a >> b >> c;

    if (a <= b && b <= c) {
        std::cout << a * 2.0 << std::endl;
        std::cout << b * 2.0 << std::endl;
        std::cout << c * 2.0 << std::endl;
    } else {
        std::cout << std::abs(a) << std::endl;
        std::cout << std::abs(b) << std::endl;
        std::cout << std::abs(c) << std::endl;
    }

    return 0;
}