#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;

	int a[n][m];

	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			a[i][j] = i == 0 && j == 0 ? 0 : (j == 0 ? (a[i-1][j] == 0 ? 1 : 0) : a[i][j-1] == 0 ? 1 : 0);
		}
	}

	for (int i=n-1; i>=0; --i) {
		for (int j=0; j<m; ++j) {
			std::cout << (a[i][j] == 0 ? "." : "X");
		}
		std::cout << std::endl;
	}
}