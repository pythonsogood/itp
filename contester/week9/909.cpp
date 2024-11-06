#include <iostream>
#include <string>

bool divisibleBy11(std::string* a) {
	// Divisibility rule of 11: Number can only be completely divided by 11 if the difference of the sum of digits at odd position and sum of digits at even position in a number is 0 or 11.
	int length = a->length();
	int odd_sum = 0;
	int even_sum = 0;

	for (int i=0; i<length; ++i) {
		if (i % 2 == 0) {
			even_sum += a->at(i) - '0';
		} else {
			odd_sum += a->at(i) - '0';
		}
	}

	return (odd_sum - even_sum) == 11 || (odd_sum - even_sum) == 0;
}

int main() {
    std::string a;
    std::cin >> a;

    std::cout << (divisibleBy11(&a) ? "YES" : "NO");

    return 0;
}