#include <iostream>

int main() {
	double a, b;
	std::cin >> a >> b;

	std::cout << ((a - 2 * b) * a) / (-2 * b);

	return 0;
}