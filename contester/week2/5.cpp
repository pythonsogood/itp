#include <iostream>
#include <string>

int main() {
	int a, b;
	std::cin >> a >> b;

	std::string c = a % b == 0 ? "yes" : "no";

	std::cout << c;
	return 0;
}