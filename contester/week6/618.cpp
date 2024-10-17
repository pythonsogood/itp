#include <iostream>

bool isDigit(char s) {
	int ascii = int(s);
	return (ascii >= 48 && ascii <= (48+9));
}

bool isOperator(char s) {
	int ascii = int(s);
	return ascii == 43 || ascii == 45 || ascii == 42 || ascii == 47;
}

bool isValidExpression(char s[], int n) {
	bool operator_flag = true;
	for (int i=0; i<n; ++i) {
		if (isDigit(s[i])) {
			operator_flag = false;
			continue;
		}
		if (!isOperator(s[i])) {
			return false;
		}
		if (operator_flag) {
			return false;
		}
		operator_flag = true;
	}
	return true;
}

int main(int argc, char *argv[]) {
	unsigned int n;
	std::cin >> n;

	char s[n];
	std::cin >> s;

	std::cout << (isValidExpression(s, n) ? "YES" : "NO");
	return 0;
}