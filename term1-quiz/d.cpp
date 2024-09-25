#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;

    double a = 0;

    for (int k=1; k<=n; ++k) {
        a+= (pow(-1, k+1))/(k*(k+1));
    }

    std::cout << a;

    return 0;
}