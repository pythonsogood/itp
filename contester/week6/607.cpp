#include <iostream>

int compPositiveCountMatrixRow(int a[][100], int n, int m) {
	int max_row = -1;
    int max_row_value = -1;
    // NOTE:
    // It's guaranteed that only one row at once will have more positive element than others
    int second_max_row = -1;
    int second_max_row_value = -1;
	for (int i=0; i<n; ++i) {
        int value = 0;
		for (int j=0; j<m; ++j) {
            if (a[i][j] > 0) {
                value++;
            }
        }
        if (value > max_row_value) {
            max_row_value = value;
            max_row = i;
        } else if (value == max_row_value) {
            second_max_row_value = value;
            second_max_row = i;
        }
	}

	if (max_row_value == second_max_row_value) {
		return -1;
	}
	return max_row;
}

int main(int argc, char *argv[]) {
	unsigned int n, m;
	std::cin >> n >> m;

	int a[n][100];
	for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
		    std::cin >> a[i][j];
        }
	}

    int row = compPositiveCountMatrixRow(a, n, m);

	if (row == -1) {
        std::cout << "Numbers are equal";
    } else {
        std::cout << row + 1;
	}

	return 0;
}