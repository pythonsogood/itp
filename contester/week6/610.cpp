#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

int countAccurance(char arr[20], char ch) {
	int length = charLength(arr);
	int count = 0;
	for (int i=0; i<length; ++i) {
		if (arr[i] == ch) {
			count++;
		}
	}
	return count;
}

int main(int argc, char *argv[]) {
	unsigned int n;

	std::cin >> n;

	char arr[n][21];
	int arr2[n];

	for (int i=0; i<n; ++i) {
		char ch;
		char s1[20];
		std::cin >> ch >> s1;
		arr2[i] = countAccurance(s1, ch);
		arr[i][0] = ch;
		for (int j=0; j<20; ++j) {
			arr[i][j+1] = s1[j];
		}
	}

	for (int i=0; i<n; ++i) {
		std::cout << arr2[i] << " " << arr[i][0] << " in ";
		int length = charLength(arr[i]);
		for (int j=0; j<length-1; ++j) {
			std::cout << arr[i][j+1];
		}
		std::cout << std::endl;
	}

	return 0;
}