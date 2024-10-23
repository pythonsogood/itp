#include <iostream>
#include <cmath>

int main() {
	unsigned int n;
	std::cin >> n;

	char s[n];
	std::cin >> s;

	char a[n][n];

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			int distance = std::abs(i-j);
			a[i][j] = distance == 0 ? s[i] : (distance % 2 == 0 ? '0' : '1' + distance / 2);
		}
	}

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}