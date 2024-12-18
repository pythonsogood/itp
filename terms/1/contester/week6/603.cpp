#include <iostream>

bool myXor(bool x, bool y) {
	return x == y ? 0 : 1;
}

int main(int argc, char *argv[]) {
	int x, y;
	std::cin >> x >> y;
	std::cout << (myXor(x == 1, y == 1) ? 1 : 0);
	return 0;
}