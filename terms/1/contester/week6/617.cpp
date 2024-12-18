#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	unsigned int n;
	std::cin >> n;

	int soldiers[n];
	for (int i=0; i<n; ++i) {
		std::cin >> soldiers[i];
	}

	int a, b;
	int min_diff = -1;
	for (int i=0; i<n; ++i) {
		int j = i > 0 ? i-1 : n-1;
		int k = i < n-1 ? i+1 : 0;
		int j_diff = std::abs(soldiers[i]-soldiers[j]);
		int k_diff = std::abs(soldiers[i]-soldiers[k]);
		if (min_diff == -1 || j_diff <= min_diff) {
			min_diff = j_diff;
			a = i;
			b = j;
		}
		if (k_diff <= min_diff) {
			min_diff = k_diff;
			a = i;
			b = k;
		}
	}

	std::cout << a+1 << " " << b+1;

	return 0;
}