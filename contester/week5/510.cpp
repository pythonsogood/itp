#include <iostream>
#include <algorithm>

int main(int argc, char *argv[]) {
    unsigned int n, m;

    std::cin >> n >> m;

    int b[n*m];

    int bi = 0;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int a;
            std::cin >> a;
            if (a > 0) {
                b[bi] = a;
                bi++;
            }
        }
    }

    std::sort(b, b+bi);

    std::cout << bi << std::endl;

    for (int i=0; i<bi; ++i) {
        std::cout << b[i] << " ";
    }

    return 0;
}