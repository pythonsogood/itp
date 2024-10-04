// Known issues:
// Bad Checker or Input

#include <iostream>

int main(int argc, char *argv[]) {
	unsigned int n, m;

	std::cin >> n >> m;

	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			if (i % 2 == 0) {
				std::cout << i*m+j << " ";
			} else {
				std::cout << (i+1)*m-1-j << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}