#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
    double b[2048];
    unsigned int c = 0;

    double a;
    while (true) {
        std::cin >> a;
        if (a == 0) {
            break;
        }
        b[c] = a;
        c++;
    }

    std::cout << c << std::endl;
    for (int i=c-1; i>=0; --i) {
        if (i <= 0) {
            std::cout << sqrt(b[i]);
            continue;
        }
        std::cout << sqrt(b[i]) << std::endl;
    }

    return 0;
}