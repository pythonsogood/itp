#include <iostream>

int main() {
    double a, b;

    std::cin >> a >> b;

    double x[] = {0.1, 1, 5};

    for (int i=0; i<sizeof(x)/sizeof(x[0]); ++i) {
        double y = a * x[i] + b;

        std::cout << "x = " << x[i] << " : y = " << y << std::endl;
    }

    return 0;
}