#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int minimum;
    int minimum_index = -1;

    int a;
    for (int i=0; i<n; ++i) {
        std::cin >> a;
        if (a < minimum || minimum_index == -1) {
            minimum = a;
            minimum_index = i;
        }
    }

    std::cout << minimum_index;

    return 0;
}