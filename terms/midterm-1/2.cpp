#include <iostream>
#include <cmath>

int main() {
    double circle, square;

    std::cin >> circle >> square;

    // AREA = PI * R^2
    // AREA/PI = R^2
    // SQRT(AREA/PI) = R
    double circle_radius = sqrt(circle/3.14);

    // AREA = A^2
    double square_side = sqrt(square);

    if (circle_radius <= square_side) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}