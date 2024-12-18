#include <iostream>
#include <algorithm>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int a[n];

    int b;
    for (int i=0; i<n; ++i) {
        std::cin >> b;
        a[i] = b;
    }

    std::sort(a, a+n);

    for (int i=0; i<n; ++i) {
        std::cout << a[i] << " ";
    }

    return 0;
}