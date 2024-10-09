#include <iostream>

int neighbors_count(int **matrix, int length, int pos_n, int pos_m) {
    int count = 0;
    int positions[8][2] = {
        {pos_n-1, pos_m}, {pos_n-1, pos_m-1}, {pos_n, pos_m-1}, {pos_n-1, pos_m+1},
        {pos_n+1, pos_m}, {pos_n+1, pos_m+1}, {pos_n, pos_m+1}, {pos_n+1, pos_m-1},
    };
    for (int i=0; i<8; ++i) {
        int n = positions[i][0];
        int m = positions[i][1];
        if (n < 0 || m < 0 || n > length-1 || m > length-1) {
            continue;
        }
        if (matrix[n][m] == 1) {
            count++;
        }
    }
    return count;
}

void cycle(int matrix[], int length) {
}

int main(int argc, char *argv[]) {
    unsigned int n, t;

    std::cin >> n >> t;

    int *a[n][n];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> a[i][j];
        }
    }

    std::cout << neighbors_count(*a, n, 1, 0);

    return 0;
}