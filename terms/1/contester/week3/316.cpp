#include <iostream>

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double c = 1;

    for (int i=0; i<n; ++i) {
        c *= (a+i);
    }

    std::cout << c;

    return 0;
}