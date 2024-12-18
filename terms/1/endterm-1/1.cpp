#include <iostream>
#include <string>
#include <cstring>

std::string filterText(std::string *text) {
	int length = text->length();
	std::string result = "";
	for (int i=0; i<length; ++i) {
		if (std::isalpha((*text)[i]) || (*text)[i] == ' ') {
			result += (*text)[i];
		}
	}
	return result;
}


int main() {
	std::string input;
	std::getline(std::cin, input);

	std::string filtered = filterText(&input);
	std::cout << filtered << std::endl;

	return 0;
}