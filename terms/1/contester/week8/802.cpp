#include <iostream>

void read_to(int *arr, unsigned int n) {
	for (int i=0; i<n; ++i) {
		std::cin >> arr[i];
	}
}

int main(int argc, char* argv[]) {
	unsigned int n;
	std::cin >> n;

	int a[n];

	read_to(a, n);

	for (int i=0; i<n; ++i) {
		std::cout << a[i] << " ";
	}

	return 0;
}