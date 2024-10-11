#include <iostream>
#include <cmath>

int main() {
    unsigned int n;

    std::cin >> n;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << (i == j ? pow(n-i, 2) : 0) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}