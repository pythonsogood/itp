#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

char decrypt_caesar(char s, int shift) {
	if (s >= 'A' && s <= 'Z') {
		int ascii = (-shift + s) % (26 + 'A');
		if (ascii < 'A') {
			ascii = ascii - 'A' + 'Z' + 1;
		}
		return char(ascii);
	} else if (s >= 'a' && s <= 'z') {
		int ascii = (-shift + s) % (26 + 'a');
		if (ascii < 'a') {
			ascii = ascii - 'a' + 'z' + 1;
		}
		return char(ascii);
	}
	return s;
}

void decrypt_caesar(char* s, int shift) {
	int length = charLength(s);
    for (int i=0; i<length; ++i) {
        s[i] = decrypt_caesar(s[i], shift);
    }
}

int main(int argc, char* argv[]) {
	char s[1024];
	int shift;

	std::cin >> s >> shift;

	decrypt_caesar(s, shift);

	std::cout << s;

	return 0;
}