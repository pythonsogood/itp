// Known issues:
// Wrong Answer test 1

#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

bool is_palindrom(char* s) {
	int length = charLength(s);

	if (length % 2 != 0) {
		return false;
	}

	for (int i=0; i<length/2; ++i) {
		if (s[i] != s[length-1-i]) {
			return false;
		}
	}

	return true;
}

int main(int argc, char* argv[]) {
	char s[4096];

	std::cin >> s;

	std::cout << (is_palindrom(s) ? "YES" : "NO");

	return 0;
}