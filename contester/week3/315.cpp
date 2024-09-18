#include <iostream>
#include <cmath>

int main() {
    double a;
    int b;
    std::cin >> a >> b;

    double c = 0;

    for (int i=1; i<=b; ++i) {
        c += a;
    }

    std::cout << c;

    return 0;
}