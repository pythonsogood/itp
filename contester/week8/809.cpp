// Known issues:
// Wrong Answer test 4

#include <iostream>

int even_count_between_min_max(int* arr, unsigned int n) {
	int min = -1;
	int max = -1;
	for (int i=0; i<n; ++i) {
		if (min == -1 || arr[i] <= arr[min]) {
			min = i;
		}
		if (max == -1 || arr[i] >= arr[max]) {
			max = i;
		}
	}

	int start = std::min(min, max);
	int end = std::max(min, max);

	int count = 0;
	for (int i=start+1; i<end; ++i) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}

	return count;
}

int main(int argc, char* argv[]) {
	unsigned int n;
	std::cin >> n;

	int a[n];
	for (int i=0; i<n; ++i) {
		std::cin >> a[i];
	}

	std::cout << even_count_between_min_max(a, n);

	return 0;
}