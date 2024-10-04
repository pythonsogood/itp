#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int r, c;

    std::cin >> r >> c;

    int minimum_value = -1;

    for (int i=0; i<r*c; ++i) {
        int a;
        std::cin >> a;

        if (a < minimum_value || minimum_value == -1) {
            minimum_value = a;
        }
    }

    std::cout << minimum_value;

    return 0;
}