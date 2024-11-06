// Known issues:
// Wrong Answer test 1

#include <iostream>
#include <string>
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
	std::string s;
	std::getline(std::cin, s);

	int length = s.length();
	int start = -1;
	int start_max = -1;
	int start_max_length = -1;

	for (int i=0; i<length; ++i) {
		if (std::isdigit(s[i])) {
			if (start == -1) {
				start = i;
			}
		} else {
			start = -1;
		}
		if (start != -1 && (i - start) > start_max_length) {
			start_max = start;
			start_max_length = i - start;
		}
	}

	int number = 0;
	for (int i=start_max; i<length; ++i) {
		if (!std::isdigit(s[i])) {
			break;
		}
		number = number * 10 + (s[i] - '0');
	}

	char formatted_number[1000000];

	formatNumber(&number, formatted_number);

	std::cout << formatted_number;

	return 0;
}