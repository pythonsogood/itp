// Known issues:
// Compilation Error

#include <iostream>
#include <string>
#include <vector>

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

void deleteDuplicates(char *text, char *dest) {
	int line_length = charLength(text);

	std::vector<std::string> words;
	std::string word = "";

	std::string current_word = "";

	for (int i=0; i<line_length; ++i) {
		if (text[i] == ' ') {
			if (std::count(words.begin(), words.end(), current_word) <= 0) {
				words.push_back(current_word);
				word += current_word + " ";
			}
			current_word.clear();
		} else {
			current_word += text[i];
			if (i == (line_length - 1)) {
				if (std::count(words.begin(), words.end(), current_word) <= 0) {
					words.push_back(current_word);
					word += current_word + " ";
				}
			}
		}
	}

	std::strcpy(dest, word.c_str());
}

int main(int argc, char* argv[]) {
	std::string _s;
	std::getline(std::cin, _s);

	char s[2048];
	std::strcpy(s, _s.c_str());

	char dest[2048];
	deleteDuplicates(s, dest);

	std::cout << dest;
}