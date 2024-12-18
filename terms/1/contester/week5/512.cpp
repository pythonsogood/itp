#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n, m;

    std::cin >> n >> m;

    int a[n][m];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            std::cin >> a[i][j];
        }
    }

    int b[m][n];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            b[m-1-j][i] = a[i][j];
        }
    }

    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}