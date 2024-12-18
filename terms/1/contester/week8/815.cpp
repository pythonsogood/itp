#include <iostream>

bool is_lucky(unsigned int* ticket) {
	int sum1 = *ticket % 10 + (*ticket / 10) % 10 + (*ticket / 100) % 10 + (*ticket / 1000) % 10;
	int sum2 = (*ticket / 10000) % 10 + (*ticket / 100000) % 10 + (*ticket / 1000000) % 10 + (*ticket / 10000000) % 10;
	return sum1 == sum2;
}

int main(int argc, char *argv[]) {
	unsigned int ticket_min, ticket_max;
	std::cin >> ticket_min >> ticket_max;

	int count = 0;
	for (unsigned int i=ticket_min; i<=ticket_max; ++i) {
		if (is_lucky(&i)) {
			count++;
		}
	}

	std::cout << count;

	return 0;
}