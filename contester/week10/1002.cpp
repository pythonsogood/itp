#include <iostream>
#include <cstring>

void toUppercase(char *text) {
	int length = std::strlen(text);
	for (int i=0; i<length; ++i) {
		text[i] = std::toupper(text[i]);
	}
}

struct Train {
	int id;
	char destination[2048];
	char time[100];
};

int main() {
	int n;
	std::cin >> n;

	Train *trains = new Train[n];

	for (int i=0; i<n; ++i) {
		struct Train train;

		std::cin >> train.id >> train.destination >> train.time;

		trains[i] = train;
	}

	char location[2048];
	std::cin >> location;
	toUppercase(location);

	int train_index = -1;

	for (int i=0; i<n; ++i) {
		char *destination_uppercase = trains[i].destination;
		toUppercase(destination_uppercase);

		if (std::strcmp(location, destination_uppercase) == 0) {
			if (train_index == -1 || std::strcmp(trains[i].time, trains[train_index].time) < 0) {
				train_index = i;
			}
		}
	}

	if (train_index != -1) {
		char *destination_uppercase = trains[train_index].destination;
		toUppercase(destination_uppercase);

		std::cout << trains[train_index].id << "_" << destination_uppercase << "_" << trains[train_index].time;
	} else {
		std::cout << "Impossible";
	}

	return 0;
}