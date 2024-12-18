#include <iostream>
#include <cmath>

int main() {
    double a,b,c;
    std::cin >> a >> b >> c;

    double d = (b*b) - (4.0 * a * c);

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2.0 * a);
        double r2 = (-b - sqrt(d)) / (2.0 * a);
        std::cout << r1 << " " << r2;
    } else if (d == 0) {
        double r1 = (b - sqrt(d)) / (2.0 * a);
        std::cout << r1;
    } else {
        std::cout << "no solution";
    }

    return 0;
}