#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

bool compare(char* s1, int size1, char* s2, int size2) {
	if (size1 != size2) {
		return false;
	}

	for (int i=0; i<size1; ++i) {
		if (s1[i] != s2[i]) {
			return false;
		}
	}

	return true;
}

int main(int argc, char* argv[]) {
	char s[1024];
	char s2[1024];

	std::cin >> s >> s2;

	std::cout << (compare(s, charLength(s), s2, charLength(s2)) ? "YES" : "NO");

	return 0;
}