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
	char ch1, ch2;

	std::cin >> ch1 >> ch2;

	char s1[20], s2[20];

	std::cin >> s1 >> s2;

	std::cout << countAccurance(s1, ch1) << " " << ch1 << " characters in " << s1 << std::endl;
	std::cout << countAccurance(s2, ch2) << " " << ch2 << " characters in " << s2 << std::endl;

	return 0;
}