#include <iostream>

int main() {
    int a;
    std::cin >> a;

    long long b = 1;

    for (int i=1; i<a; ++i) {
        b *= i+1;
    }

    std::cout << b;

    return 0;
}