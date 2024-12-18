#include <iostream>

double power(double a, int n) {
	if (n > 0) {
		return a * power(a, n - 1);
	} else if (n < 0) {
		return 1.0 / power(a, -n);
	}
	return 1.0;
}

int main(int argc, char *argv[]) {
	double a;
	int n;
	std::cin >> a >> n;
	std::cout << power(a, n);
	return 0;
}