#include <iostream>

int main() {
    int a;

    std::cin >> a;

    if (a % 4 == 0 && !(a % 100 == 0 & a % 400 != 0)) {
        std::cout << "366";
    } else {
        std::cout << "365";
    }

    return 0;
}