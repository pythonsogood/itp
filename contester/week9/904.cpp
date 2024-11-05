// Known issues:
// Compilation Error
// C++ ISO 2011 is not supported (why contester does not support modern C++???)

#include <iostream>
#include <string> // NOTE: idk how to user-input char array w/ whitespaces
#include <unordered_map> // NOTE: idk how to solve w/o hashmap

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

char toUpperCase(char* s) {
	int ascii = int(*s);
	return (ascii >= 'a' && ascii <= 'z') ? char(ascii + int('A' - 'a')) : *s;
}

void toUpperCaseArray(char* s) {
	int length = charLength(s);
	for (int i=0; i<length; ++i) {
		s[i] = toUpperCase(&s[i]);
	}
}

void mostRecent(char *text, char *word) {
	std::unordered_map<std::string, int> count;

	int line_length = charLength(text);

	std::string current_word = "";
	for (int i=0; i<line_length; ++i) {
		if (text[i] == ' ') {
			count[current_word]++;
			current_word.clear();
		} else {
			current_word += text[i];
			if (i == (line_length - 1)) {
				count[current_word]++;
			}
		}
	}

	std::string max_word = "";
	for (const auto & [word, frequency] : count) {
		if (frequency > count[max_word]) {
			max_word = word;
		}
	}

	std::strcpy(word, max_word.c_str());

	toUpperCaseArray(word);
}

int main(int argc, char* argv[]) {
	std::string _s;
	std::getline(std::cin, _s);

	char s[2048];
	std::strcpy(s, _s.c_str());

	char word[2048];
	mostRecent(s, word);

	std::cout << word;
}