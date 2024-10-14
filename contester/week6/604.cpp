#include <iostream>

bool election(bool x, bool y, bool z) {
	return x & y | x & z | y & z;
}

int main(int argc, char *argv[]) {
	int x, y, z;
	std::cin >> x >> y >> z;
	std::cout << (election(x == 1, y == 1, z == 1) ? 1 : 0);
	return 0;
}