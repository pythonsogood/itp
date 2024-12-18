#include <iostream>

int main() {
    int x;

    std::cin >> x;

    for (int i=0; i<3; ++i) {
        for (int j=0; j<3; ++j) {
            if (i==j) {
                std::cout << x << " ";
            } else {
                std::cout << i*3+(j+1) << " ";
            }
        }
        std::cout << std::endl;
    }
}