#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char a[n];

    std::cin >> a;

    for (int i=0; i<n; ++i) {
        std::cout << a[i];
        if (i < n-1) {
            for (int _=0; _<n; ++_) {
                std::cout << " ";
            }
        }
    }

    return 0;
}