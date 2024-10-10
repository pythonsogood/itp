// Known issues:
// Bad Checker or Input

#include <iostream>

int main(int argc, char *argv[]) {
	unsigned int n, m;

	std::cin >> n >> m;

	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			int value = i % 2 == 0 ? i*m+j : (i+1)*m-1-j;
			if (value < 10 && value > 0) {
				std::cout << " ";
			}
			std::cout << value << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}