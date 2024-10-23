#include <iostream>
#include <cctype>

void normalize(char* s, char* ss) {
	int n = 0;
	for (int i=0; i<100; ++i) {
		if (s[i] == '\0') {
			ss[n] = '\0';
			break;
		}
		if (std::isalpha(s[i])) {
			ss[n] = s[i];
			n++;
		}
	}
}

int main(int argc, char* argv[]) {
	char s[100];
	std::cin >> s;

	char ss[100];

	normalize(s, ss);

	std::cout << ss;

	return 0;
}