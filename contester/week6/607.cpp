#include <iostream>

int compPositiveCountMatrixRow(int a[][100], int n, int m) {
	int max_row = -1;
	for (int i=0; i<n; ++i) {
		if (a[i] > 0) {
			aa++;
		}
		if (b[i] > 0) {
			bb++;
		}
	}

	if (aa > bb) {
		return 1;
	} else if (aa < bb) {
		return -1;
	} else {
		return 0;
	}
}

int main(int argc, char *argv[]) {
	unsigned int n, m;
	std::cin >> n >> m;

	int a[n][m];
	for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
		    std::cin >> a[i][j];
        }
	}

	switch (compPositiveCountMatrixRow(a, n, m)) {
		case 1:
			std::cout << "Number of positives in the first array is greater";
			break;
		case -1:
			std::cout << "Number of positives in the second array is greater";
			break;
		case 0:
			std::cout << "Numbers are equal";
			break;
	}

	return 0;
}