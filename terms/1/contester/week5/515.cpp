#include <iostream>

int main(int argc, char *argv[]) {
	unsigned int n, m;

	std::cin >> n >> m;

	bool a[n];
	for (int i=0; i<n; ++i) {
		a[i] = false;
	}

	int eliminated_index = -1;

	while (true) {
		unsigned int eliminated = 0;
		for (int i=0; i<n; ++i) {
			if (a[i]) {
				eliminated++;
			}
		}
		if ((n-eliminated) == 1) {
			break;
		}

		for (int _=0; _<m; ++_) {
			while (true) {
				eliminated_index = (eliminated_index + 1) % n;
				if (!a[eliminated_index]) {
					break;
				}
			}
		}

		a[eliminated_index] = true;
	}

	for (int i=0; i<n; ++i) {
		if (!a[i]) {
			std::cout << i+1;
			break;
		}
	}

	return 0;
}