#include <iostream>

int main(int argc, char *argv[]) {
	unsigned int n;

	std::cin >> n;

	unsigned long long a[n][n];

	for (int i=0; i<n; ++i) {
		for (int j=0; j<=i; ++j) {
			if (j == 0 || j == i) {
				a[i][j] = 1;
			} else {
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
		}
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<=i; ++j) {
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}