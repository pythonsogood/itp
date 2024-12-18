#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

void reverseCase(char s[]) {
	int length = charLength(s);
	for (int i=0; i<length; ++i) {
		int ascii = int(s[i]);
		if (ascii >= 97 && ascii <= (97+25)) {
			s[i] = char(ascii - 32);
		} else if (ascii >= 65 && ascii <= (65+25)) {
			s[i] = char(ascii + 32);
		}
	}
}

int main(int argc, char *argv[]) {
	char s[100];

	std::cin >> s;

	reverseCase(s);

	std::cout << s;
	return 0;
}