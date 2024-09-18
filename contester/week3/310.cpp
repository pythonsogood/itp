#include <iostream>

int main() {
    int a;
    std::cin >> a;

    long long b = 2;
    if (a == 0) {
        std::cout << 1;
        return 0;
    }

    for (int i=1; i<a; ++i) {
        b *= 2;
    }

    std::cout << b;

    return 0;
}