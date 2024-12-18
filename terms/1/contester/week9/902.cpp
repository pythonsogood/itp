#include <iostream>
#include <string>
#include <cstring>

void replace(char *source, char *dest) {
	int length = std::strlen(source);
	for (int i=0; i<length; ++i) {
		dest[i] = (source[i] == '!' ? '.' : source[i]);
	}
}

int main() {
	std::string _s;
	std::getline(std::cin, _s);

	char s[2048];
	std::strcpy(s, _s.c_str());

	char s2[2048];
	replace(s, s2);

	std::cout << s2;

	return 0;
}