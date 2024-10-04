// Known issues:
// Wrong Answer: test 5

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

    unsigned int max_sum = 0;
    unsigned int max_sum_column = 0;

    for (int j=0; j<m; ++j) {
        unsigned int current_sum = 0;
        for (int i=0; i<n; ++i) {
            current_sum+=a[i][j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_sum_column = j;
        }
    }

    std::cout << max_sum_column + 1;

    return 0;
}