#include <iostream>

int countChar(char a, char* s) {
	int count = 0;
	for (int i=0; i<20; ++i) {
		if (s[i] == '\0') {
			break;
		}
		if (s[i] == a) {
			count++;
		}
	}
	return count;
}

int main(int argc, char* argv[]) {
	unsigned int n;
	std::cin >> n;

	char input[n][2][20];

	for (int i=0; i<n; ++i) {
		std::cin >> input[i][0][0];
		std::cin >> input[i][1];
	}

	for (int i=0; i<n; ++i) {
		std::cout << countChar(input[i][0][0], input[i][1]) << " " << input[i][0][0] << " in " << input[i][1] << std::endl;
	}

	return 0;
}