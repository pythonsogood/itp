#include <iostream>

int oddSum(int n) {
	int sum = 0;
    for (int i=1; i<=n; i+=2) {
        sum += i;
    }
    return sum;
}

int main() {
	int n;
	std::cin >> n;

	std::cout << oddSum(n) << std::endl;

	return 0;
}