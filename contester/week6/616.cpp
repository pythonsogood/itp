#include <iostream>
#include <cmath>

int toDecimal(char n[], int length, int base) {
	int dec = 0;
	for (int i=0; i<length; ++i) {
		int d = int(n[length-1-i]) - 48;
		dec += pow(base, i) * d;
	}
	return dec;
}

int main(int argc, char *argv[]) {
	unsigned int n;
	std::cin >> n;

	char binary[n];
	std::cin >> binary;

	std::cout << toDecimal(binary, n, 2);
	return 0;
}