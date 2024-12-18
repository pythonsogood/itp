#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int a[n][n];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> a[i][j];
        }
    }

    bool is_symmetric = true;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            if (a[i][j] != a[j][i]) {
                is_symmetric = false;
                break;
            }
        }
    }

    if (is_symmetric) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}