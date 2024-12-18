#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char a[n];

    std::cin >> a;

    for (int i=0; i<n; ++i) {
        for (int _=0; _<=i; ++_) {
            std::cout << a[i];
        }
        std::cout << " ";
    }

    return 0;
}