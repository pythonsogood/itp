#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int sum = 0;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            int a;
            std::cin >> a;

            if (j>i) {
                sum+=a;
            }
        }
    }

    std::cout << sum;

    return 0;
}