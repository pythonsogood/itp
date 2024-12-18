// Known issues:
// Wrong Answer test 6

#include <iostream>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

int toInt(char s) {
	return -int('0') + s;
}

int digitsCount(int a) {
	int number = a;
    int count = number > 0 ? 0 : 1;
    while (number) {
        number /= 10;
        count++;
    }
    return count;
}

int parseInt(char *s, int start) {
	int length = charLength(s);

	if (start >= length) {
		return 0;
	}

	int num = 0;

	for (int i=start; i<length; ++i) {
		if (s[i] == '.') {
			break;
		}

		num = num * 10 + toInt(s[i]);
	}

	return num;
}

bool isValidIP(char *s) {
	int length = charLength(s);

	int i = 0;

	while (i < length) {
		int num = parseInt(s, i);
		if (num < 0 || num > 255) {
			return false;
		}

		i += digitsCount(num) + 1;
	}

	return true;
}

int main(int argc, char* argv[]) {
	char s[16];

	std::cin >> s;

	std::cout << isValidIP(s);

	return 0;
}