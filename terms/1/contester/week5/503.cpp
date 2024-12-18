#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n, m;

    std::cin >> n >> m;

    unsigned int pos_n, pos_m;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int a;
            std::cin >> a;

            if (a == 0) {
                pos_n = i;
                pos_m = j;
            }
        }
    }

    std::cout << pos_n+1 << " " << pos_m+1;

    return 0;
}