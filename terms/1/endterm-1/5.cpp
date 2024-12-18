#include <iostream>
#include <cstring>

void capitalize(char *s) {
	int length = std::strlen(s);
	s[0] = std::toupper(s[0]);
	for (int i=1; i<length; ++i) {
		s[i] = std::tolower(s[i]);
	}
}

int main() {
	char s[2048];
	std::cin >> s;

	capitalize(s);

	std::cout << s << std::endl;

	return 0;
}