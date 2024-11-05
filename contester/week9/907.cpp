#include <iostream>
#include <string>

std::string* max(std::string* a, std::string* b, std::string* c) {
	int a_length = a->length();
	int b_length = b->length();
	int c_length = c->length();

	if (a_length > b_length && a_length > c_length) {
		return a;
	} else if (b_length > a_length && b_length > c_length) {
		return b;
	} else if (c_length > a_length && c_length > b_length) {
		return c;
	} else if (*a > *b && *a > *c) {
		return a;
	} else if (*b > *a && *b > *c) {
		return b;
	}
	return c;
}

int main() {
    std::string a, b, c;
    std::cin >> a >> b >> c;

    std::cout << *max(&a, &b, &c);

    return 0;
}