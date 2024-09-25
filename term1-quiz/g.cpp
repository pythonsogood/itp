#include <iostream>
#include <cmath>

int main() {
    int n;

    std::cin >> n;

    double a = 0;

    for (int k=1; k<=n; ++k) {
        a+= (pow(-1, k))/((2*k+1)*k);
    }

    std::cout << a;

    return 0;
}