#include <iostream>

char getSign(int a, int b) {
	if (a > b) {
		return '>';
	} else if (a < b) {
		return '<';
	}
	return '=';
}

int main(int argc, char *argv[]) {
	int a, b;
	std::cin >> a >> b;
	std::cout << getSign(a, b);
	return 0;
}