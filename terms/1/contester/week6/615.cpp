#include <iostream>

int timeDifference(int a[3], int b[3]) {
	return (b[0] * 3600 + b[1] * 60 + b[2]) - (a[0] * 3600 + a[1] * 60 + a[2]);
}

int main(int argc, char *argv[]) {
	int a[3], b[3];
	std::cin >> a[0] >> a[1] >> a[2];
	std::cin >> b[0] >> b[1] >> b[2];

	int c_sec = timeDifference(a, b);

	int c[3] = {c_sec / 3600, (c_sec % 3600) / 60, c_sec % 3600 % 60};

	for (int i=0; i<3; ++i) {
		if (c[i] < 10) {
			std::cout << "0";
		}
		std::cout << c[i];
		if (i < 2) {
			std::cout << ":";
		}
	}

	return 0;
}