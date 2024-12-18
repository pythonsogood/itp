#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int minimum = 1001; // by task, number cannot be higher than 1000

    int a;
    for (int i=0; i<n; ++i) {
        std::cin >> a;
        if (a < minimum) {
            minimum = a;
        }
    }

    std::cout << minimum;

    return 0;
}