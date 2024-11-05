#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

char toLowerCase(char* s) {
	int ascii = int(*s);
	return (ascii >= 'A' && ascii <= 'Z') ? char(ascii + int('a' - 'A')) : *s;
}

void toLowerCaseArray(char* s) {
	int length = charLength(s);
	for (int i=0; i<length; ++i) {
		s[i] = toLowerCase(&s[i]);
	}
}

bool contains_case_insensitive(char* s1, char* s2) {
	int length = charLength(s1);
	int length2 = charLength(s2);

	toLowerCaseArray(s1);

	int j = 0;
	for (int i=0; i<length; ++i) {
		if (s1[i] == s2[j]) {
			j++;
			if (j >= length2) {
				return true;
			}
		} else {
			j = 0;
		}
	}

	return false;
}

int main(int argc, char* argv[]) {
	char s[2048];
	std::cin >> s;

	std::cout << (contains_case_insensitive(s, "aitu") ? "YES" : "NO");

	return 0;
}