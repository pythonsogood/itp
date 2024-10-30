#include <iostream>

int positive_sum_before_max(int* arr, unsigned int n) {
	int max = -1;
	for (int i=0; i<n; ++i) {
		if (max == -1 || arr[i] >= arr[max]) {
			max = i;
		}
	}

	int sum = 0;
	for (int i=0; i<max; ++i) {
		if (arr[i] > 0) {
			sum += arr[i];
		}
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

	std::cout << positive_sum_before_max(a, n);

	return 0;
}