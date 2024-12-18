#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << abs(i-j)+1 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}