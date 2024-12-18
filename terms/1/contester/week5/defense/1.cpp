#include <iostream>
#include <cmath>

int main() {
    unsigned int n;

    std::cin >> n;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << pow(i*n+j+1, 2) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}