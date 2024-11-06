#include <iostream>
#include <cstring>

bool checkParentheses(char *text) {
	int length = std::strlen(text);
	char stack[100000];
	int stack_length = 0;

	for (int i=0; i<length; i++) {
		if (text[i] == '(' || text[i] == '[' || text[i] == '{') {
			stack[stack_length] = text[i];
			stack_length++;
		} else if (text[i] == ')' || text[i] == ']' || text[i] == '}') {
			if ((stack[stack_length-1] == '(' && text[i] == ')') || (stack[stack_length-1] == '[' && text[i] == ']') || (stack[stack_length-1] == '{' && text[i] == '}')) {
				stack[stack_length] = '\0';
				stack_length--;
			} else {
				return false;
			}
		}
	}

	return stack_length == 0;
}

int main() {
	unsigned int n;
	std::cin >> n;

	char text[n];
	std::cin >> text;

	std::cout << (checkParentheses(text) ? "Yes" : "No");
}