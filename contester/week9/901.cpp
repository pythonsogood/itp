#include <iostream>
#include <cstring>

void toLowerCase(char* s) {
	int length = std::strlen(s);
	for (int i=0; i<length; ++i) {
		s[i] = std::tolower(s[i]);
	}
}

bool contains_case_insensitive(char* s1, char* s2) {
	int length = std::strlen(s1);
	int length2 = std::strlen(s2);

	toLowerCase(s1);

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

int main() {
	char s[2048];
	std::cin >> s;

	std::cout << (contains_case_insensitive(s, "aitu") ? "YES" : "NO");

	return 0;
}