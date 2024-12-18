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

	bool found = false;

	for (int i=0; i<n; ++i) {
		char *destination_uppercase = trains[i].destination;
		toUppercase(destination_uppercase);

		if (std::strcmp(location, destination_uppercase) == 0) {
			std::cout << trains[i].id << "_" << destination_uppercase << "_" << trains[i].time;
			found = true;
			break;
		}
	}

	if (!found) {
		std::cout << "Impossible";
	}

	return 0;
}