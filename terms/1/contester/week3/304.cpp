#include <iostream>
#include <algorithm>

int main() {
    double a,b,c;
    std::cin >> a >> b >> c;

    std::cout << std::min(std::min(a, b), c) << " " << std::max(std::max(a, b), c);

    return 0;
}