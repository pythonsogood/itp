#include <iostream>

void even_odd_process(int* arr, unsigned int n) {
	int a[n];
	for (int i=0; i<n; ++i) {
		a[i] = arr[i];
	}

	int even = -(n/2);
	for (int i=0; i<n; ++i) {
		if (i < n/2) {
			arr[i] = a[i*(1+i)/2];
		} else {
			arr[i] = a[i+1 + even];
			even++;
		}
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