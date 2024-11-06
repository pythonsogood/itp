// Known issues:
// Wrong Answer test 9

#include <iostream>
#include <string>

int main() {
	std::string s;
	std::getline(std::cin, s);

	int length = s.length();
	long double words = 0;
	long double letters = 0;

	bool is_word = false;
	for (int i=0; i<length; ++i) {
		if (!isalpha(s[i])) {
			if (is_word) {
				words++;
			}
			is_word = false;
		} else {
			letters++;
			is_word = true;
			if (i == length-1) {
				words++;
			}
		}
	}

	std::cout << letters/words << std::endl;
}