#include <iostream>

int compLongestProgressMatrixRow(int a[][100], int n, int m) {
	int max_row = -1;
    int max_row_length = -1;
	for (int i=0; i<n; ++i) {
		char s;
        int current_length = 0;
		int max_length = 0;
		for (int j=0; j<m; ++j) {
            if (current_length == 0) {
				s = a[i][j];
				current_length++;
			} else if (a[i][j] == s) {
				current_length++;
			} else {
				if (max_length < current_length) {
					max_length = current_length;
				}
				s = a[i][j];
				current_length = 1;
			}
        }
		if (current_length > max_length) {
			max_length = current_length;
		}
        if (max_length > max_row_length) {
            max_row_length = max_length;
            max_row = i;
        }
	}

	if (max_row_length <= 1) {
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

    int row = compLongestProgressMatrixRow(a, n, m);

	if (row == -1) {
        std::cout << "No series of equal elements";
    } else {
        std::cout << "Longest series is in the string " << row;
	}

	return 0;
}