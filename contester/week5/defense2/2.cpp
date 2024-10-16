#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			std::cout << (i % 2 != j % 2 ? i+2 : 1);
		}
		std::cout << std::endl;
	}

	return 0;
}