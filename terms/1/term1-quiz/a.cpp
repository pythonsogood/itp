#include <iostream>

int main() {
    int n;
    std::cin >> n;

    double a = 1;

    for (double i=1; i<n; i+=2) {
        a *= i/(i+1);
    }

    std::cout << a;

    return 0;
}