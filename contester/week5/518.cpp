#include <iostream>

int neighbors_count(int matrix[10][10], int length, int pos_n, int pos_m) {
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

void cycle(int matrix[10][10], int length) {
	int neighbors[10][10];

	for (int i=0; i<length; ++i) {
		for (int j=0; j<length; ++j) {
			neighbors[i][j] = neighbors_count(matrix, length, i, j);
		}
	}


	for (int i=0; i<length; ++i) {
		for (int j=0; j<length; ++j) {
			if (matrix[i][j] == 1) {
				if (neighbors[i][j] < 2) {
					matrix[i][j] = 0;
				} else if (neighbors[i][j] > 3) {
					matrix[i][j] = 0;
				}
			} else {
				if (neighbors[i][j] == 3) {
					matrix[i][j] = 1;
				}
			}
		}
	}
}

int main(int argc, char *argv[]) {
    unsigned int n, t;

    std::cin >> n >> t;

    int a[10][10];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> a[i][j];
        }
    }

	for (int i=0; i<t; ++i) {
		cycle(a, n);
	}

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}