// Known issues:
// Wrong Answer: test 3

#include <iostream>

void swap2(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main(int argc, char *argv[]) {
	int a, b;
	std::cin >> a >> b;

	swap2(&a, &b);

	std::cout << a << " " << b;
	return 0;
}