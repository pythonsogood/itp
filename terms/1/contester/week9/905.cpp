#include <iostream>
#include <string>
#include <cstring>
#include <vector>

int vectorIndex(std::string *word, std::vector<std::string> *keys) {
	int length = keys->size();
	for (int i=0; i<length; ++i) {
		if (keys->at(i) == *word) {
			return i;
		}
	}
	return -1;
}

void deleteDuplicates(char *text, char *dest) {
	int line_length = std::strlen(text);

	std::vector<std::string> words;
	std::string word = "";

	std::string current_word = "";

	for (int i=0; i<line_length; ++i) {
		if (text[i] == ' ') {
			if (vectorIndex(&current_word, &words) == -1) {
				words.push_back(current_word);
				word += current_word + " ";
			}
			current_word.clear();
		} else {
			current_word += text[i];
			if (i == (line_length - 1)) {
				if (vectorIndex(&current_word, &words) == -1) {
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