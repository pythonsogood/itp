#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cin >> a;

    double b = sqrt(2);

    for (int i=1; i<a; ++i) {
        b = sqrt(b+2);
    }

    std::cout << b;

    return 0;
}