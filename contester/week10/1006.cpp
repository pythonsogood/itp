// Known issues:
// Bad Checker or Input

#include <iostream>
#include <cstring>
#include <algorithm>

void toUppercase(char *text) {
	int length = std::strlen(text);
	for (int i=0; i<length; ++i) {
		text[i] = std::toupper(text[i]);
	}
}

struct Train {
	int id;
	char from[2048];
	char to[2048];
	char time[100];
};

bool compare(Train a, Train b) {
	return std::strcmp(a.to, b.to) < 0;
}

int main() {
	unsigned int n;
	std::cin >> n;

	Train *trains = new Train[n];

	for (int i=0; i<n; ++i) {
		struct Train train;

		std::cin >> train.id >> train.from >> train.to >> train.time;

		toUppercase(train.from);
		toUppercase(train.to);

		trains[i] = train;
	}

	std::sort(trains, trains+n, compare);

	for (int i=0; i<n; ++i) {
		std::cout << trains[i].id << " " << trains[i].from << " " << trains[i].to << " " << trains[i].time << std::endl;
	}

	return 0;
}