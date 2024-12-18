#include <iostream>

int digitsSum(int n) {
	int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
	int n;
	std::cin >> n;

	std::cout << digitsSum(n) << std::endl;

	return 0;
}