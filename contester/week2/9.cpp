#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	double x[] = {0.1, 1.0, 5.0};

	for (int i=0; i<sizeof(x)/sizeof(x[0]); ++i) {
		std::cout << "x = " << x[i] << " : y = " << a * x[i] + b << std::endl;
	}

	return 0;
}