#include <iostream>
#include <cmath>

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double c = 1.0/a;

    for (int i=1; i<=n; ++i) {
        c += 1.0/(std::pow(a, 2*i));
    }

    std::cout << c;

    return 0;
}