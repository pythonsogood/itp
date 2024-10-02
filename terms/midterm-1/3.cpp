#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;

    double a = 0;

    for (int i=1; i<=n; ++i) {
        double b = (1.0/(2.0*i-1.0)) * pow(-1, i+1);
        a += b;
    }

    std::cout << a << std::endl;

    return 0;
}