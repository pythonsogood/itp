#include <iostream>
#include <string>
#include <cstring>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

void replace(char *source, char *dest) {
	int length = charLength(source);
	for (int i=0; i<length; ++i) {
		dest[i] = (source[i] == '!' ? '.' : source[i]);
	}
}

int main(int argc, char* argv[]) {
	std::string _s;
	std::getline(std::cin, _s);

	char s[2048];
	std::strcpy(s, _s.c_str());

	char s2[2048];
	replace(s, s2);

	std::cout << s2;

	return 0;
}