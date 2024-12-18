#include <iostream>
#include <string>
#include <cstring>
#include <vector> // C++ 98 does not have any hasmap, contester does not accept with unordered_map

void toUpperCase(char* s) {
	int length = std::strlen(s);
	for (int i=0; i<length; ++i) {
		s[i] = std::toupper(s[i]);
	}
}

int vectorIndex(std::string *word, std::vector<std::string> *keys) {
	int length = keys->size();
	for (int i=0; i<length; ++i) {
		if (keys->at(i) == *word) {
			return i;
		}
	}
	return -1;
}

void mostRecent(char *text, char *word) {
	std::vector<std::string> count_keys;
	std::vector<int> count_values;

	int line_length = std::strlen(text);

	std::string current_word = "";
	for (int i=0; i<line_length; ++i) {
		if (text[i] == ' ') {
			int index = vectorIndex(&current_word, &count_keys);
			if (index == -1) {
				count_keys.push_back(current_word);
				count_values.push_back(1);
			} else {
				count_values[index]++;
			}
			current_word.clear();
		} else {
			current_word += text[i];
			if (i == (line_length - 1)) {
				int index = vectorIndex(&current_word, &count_keys);
				if (index == -1) {
					count_keys.push_back(current_word);
					count_values.push_back(1);
				} else {
					count_values[index]++;
				}
			}
		}
	}

	std::string max_word = "";
	for (int i=0; i<count_keys.size(); ++i) {
		if (max_word.length() == 0 || count_values[i] > count_values[vectorIndex(&max_word, &count_keys)]) {
			max_word = count_keys[i];
		}
	}

	std::strcpy(word, max_word.c_str());

	toUpperCase(word);
}

int main() {
	std::string _s;
	std::getline(std::cin, _s);

	char s[2048];
	std::strcpy(s, _s.c_str());

	char word[2048];
	mostRecent(s, word);

	std::cout << word;
}