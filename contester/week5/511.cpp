#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << (n*n) - (j*n+i) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}