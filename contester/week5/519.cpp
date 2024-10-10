#include <iostream>

int main(int argc, char *argv[]) {
	unsigned int n = 9;

	int a[n][n];

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			a[i][j] = 0;
		}
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			if (
				(i == 0 || i == n-1) // top bottom
				|| (j == (n-1)) // right
				|| (i > 1 && j == 0) // left
				|| (i > 1 && i < n - 2 && ((j == i - 1))) // diagonal
			) {
				a[i][j] = 1;
			}
		}
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			if (
				(i > 1 && a[i-1][j] == 0 && a[i][j+1] != 1 && j < n - 2)
			) {
				a[i][j] = 1;
			}
		}
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			std::cout << a[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}