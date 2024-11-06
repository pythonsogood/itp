#include <iostream>
#include <cstring>

bool checkParentheses(char *text) {
	int length = std::strlen(text);
	int stack = 0;

	for (int i=0; i<length; i++) {
		if (text[i] == '(') {
			stack++;
		} else if (text[i] == ')') {
			if (stack > 0) {
				stack--;
			} else {
				return false;
			}
		}
	}

	return stack == 0;
}

int main() {
	unsigned int n;
	std::cin >> n;

	char text[n];
	std::cin >> text;

	std::cout << (checkParentheses(text) ? "Yes" : "No");
}