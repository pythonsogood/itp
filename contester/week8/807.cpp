#include <iostream>

int between_zero_sum(int* arr, unsigned int n) {
	int start = -1;
	int end = -1;
	for (int i=0; i<n; ++i) {
		if (arr[i] == 0) {
			if (start == -1) {
				start = i;
			} else if (end == -1) {
				end = i;
			}
		}
	}

	int sum = 0;
	for (int i=start; i<=end; ++i) {
		sum += arr[i];
	}

	return sum;
}

int main(int argc, char* argv[]) {
	unsigned int n;
	std::cin >> n;

	int a[n];
	for (int i=0; i<n; ++i) {
		std::cin >> a[i];
	}

	std::cout << between_zero_sum(a, n);

	return 0;
}