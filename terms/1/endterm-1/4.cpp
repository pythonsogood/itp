#include <iostream>
#include <string>
#include <cstring>
#include <vector>

void toUppercase(std::string *text) {
	int length = text->length();
	for (int i=0; i<length; ++i) {
		(*text)[i] = std::toupper((*text)[i]);
	}
}

struct Train {
	int id;
	std::string destination;
	std::string time;
};

Train addTrain(std::vector<Train> *trains, int *id, std::string *destination, std::string *time) {
    Train train = {*id, *destination, *time};
    trains->push_back(train);

	return train;
}

void findTrain(std::vector<Train> *trains, std::string *location) {
	std::string location_uppercase = *location;
	toUppercase(&location_uppercase);

	int trains_count = trains->size();

	for (int i=0; i<trains_count; ++i) {
		std::string destination_uppercase = (*trains)[i].destination;
		toUppercase(&destination_uppercase);

		if (location_uppercase.compare(destination_uppercase) == 0) {
			std::cout << (*trains)[i].id << "_" << destination_uppercase << "_" << (*trains)[i].time;
			return;
		}
	}

	std::cout << "Impossible";
}

int main() {
	int n;
	std::cin >> n;

	std::vector<Train> trains = {};

	for (int i=0; i<n; ++i) {
		int id;
        std::string destination, time;
        std::cin >> id >> destination >> time;

		addTrain(&trains, &id, &destination, &time);
	}

	std::string location;
	std::cin >> location;

	findTrain(&trains, &location);

	return 0;
}