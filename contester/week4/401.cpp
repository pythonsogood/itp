#include <iostream>

int main(int argc, char *argv[]) {
    int b[101];
    unsigned int c = 0;

    int a;
    while (true) {
        std::cin >> a;
        if (a == -1) {
            break;
        }
        b[c] = a;
        c++;
    }

    std::cout << c << std::endl;
    for (int i=0; i<c; ++i) {
        if (i >= (c-1)) {
            std::cout << b[i];
            continue;
        }
        std::cout << b[i] << " ";
    }

    return 0;
}