#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int a[n][n];
    int b[n][n];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> b[i][j];
        }
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << a[i][j] + b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}