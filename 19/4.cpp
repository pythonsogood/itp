#include <iostream>

int main() {
    double a, b;

    std::cin >> a >> b;

    double c = (a*(a-2*b))/(-2*b);

    std::cout << c << std::endl;

    return 0;
}