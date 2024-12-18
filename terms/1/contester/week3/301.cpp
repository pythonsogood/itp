#include <iostream>

int main() {
    double x,y,z;
    std::cin >> x >> y >> z;
    if (x < y && y < z) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}