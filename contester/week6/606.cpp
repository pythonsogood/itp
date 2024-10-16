#include <iostream>

int compPositiveCountArrays(int a[], int b[], int length) {
	int aa = 0;
	int bb = 0;
	for (int i=0; i<length; ++i) {
		if (a[i] > 0) {
			aa++;
		}
		if (b[i] > 0) {
			bb++;
		}
	}

	if (aa > bb) {
		return 1;
	} else if (aa < bb) {
		return -1;
	} else {
		return 0;
	}
}

int main(int argc, char *argv[]) {
	unsigned int n;
	std::cin >> n;

	int a[n];
	int b[n];
	for (int i=0; i<n; ++i) {
		std::cin >> a[i];
	}
	for (int i=0; i<n; ++i) {
		std::cin >> b[i];
	}

	switch (compPositiveCountArrays(a, b, n)) {
		case 1:
			std::cout << "Number of positives in the first array is greater";
			break;
		case -1:
			std::cout << "Number of positives in the second array is greater";
			break;
		case 0:
			std::cout << "Numbers are equal";
			break;
	}

	return 0;
}