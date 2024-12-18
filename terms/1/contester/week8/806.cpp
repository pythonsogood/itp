#include <iostream>

void even_odd_process(int* arr, unsigned int n) {
	int a[n];
	for (int i=0; i<n; ++i) {
		a[i] = arr[i];
	}

	for (int i=0; i<n; ++i) {
		arr[i] = a[((i % (n/2)) * 2) + (i < n/2 ? 0 : 1)];
	}
}

int main(int argc, char* argv[]) {
	unsigned int n;
	std::cin >> n;

	int a[n];
	for (int i=0; i<n; ++i) {
		std::cin >> a[i];
	}

	even_odd_process(a, n);

	for (int i=0; i<n; ++i) {
		std::cout << a[i] << " ";
	}

	return 0;
}