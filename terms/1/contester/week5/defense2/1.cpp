// input: 4 abcd
// output: a$b$$c$$$d$$$$

#include <iostream>

int main() {
	int n;
	std::cin >> n;

	char s[n];
	std::cin >> s;

	for (int i=0; i<n ; ++i) {
		std::cout << s[i];
		for (int j=0; j<=i; ++j) {
			std::cout << '$';
		}
	}

	return 0;
}