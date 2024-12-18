// Known issues:
// Wrong Answer test 1

#include <iostream>
#include <cstring>

void reverse(char* s) {
	int length = std::strlen(s);
	char *s2 = new char[length + 1];

	for (int i=0; i<length; ++i) {
		s2[i] = s[i];
		s2[i+1] = '\0';
	}

	for (int i=0; i<length; ++i) {
		s[i] = s2[length-i-1];
	}
}

void numberToCharReversed(int* n, char* dest) {
	int i = *n;
	int j = 0;
	while (i > 0) {
		dest[j] = (i % 10) + '0';
		i /= 10;
		j++;
	}
	dest[j] = '\0';
}

void formatNumber(int* n, char* dest) {
	char s[200];
	numberToCharReversed(n, s);

	int length = std::strlen(s);

	int j = 0;
	for (int i=0; i<length; ++i) {
		if (i > 0 && i % 3 == 0) {
			dest[j] = ' ';
			j++;
		}
		dest[j] = s[i];
		j++;
	}

	dest[j] = '\0';

	reverse(dest);
}

int main() {
	int n;
	std::cin >> n;

	char s[200];
	formatNumber(&n, s);

	std::cout << s;

	return 0;
}