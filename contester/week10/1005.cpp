#include <iostream>

struct Luggage {
	char description[2048];
	int count;
	double weight;
};

struct Passenger {
	int luggageSize;
	char name[1024];
	Luggage *luggage;
};

int main() {
	unsigned int n;
	std::cin >> n;

	Passenger *passengers = new Passenger[n];

	int maxPassenger = -1;
	int maxLuggage = -1;

	for (int i=0; i<n; ++i) {
		struct Passenger passenger;

		std::cin >> passenger.name >> passenger.luggageSize;

		Luggage *luggages = new Luggage[passenger.luggageSize];

		for (int j=0; j<passenger.luggageSize; ++j) {
			struct Luggage luggage;

			std::cin >> luggage.description >> luggage.count >> luggage.weight;

			luggages[j] = luggage;

			if (maxLuggage == -1 || (maxPassenger == i ? luggages : passengers[maxPassenger].luggage)[maxLuggage].weight < luggage.weight) {
				maxPassenger = i;
				maxLuggage = j;
			}
		}

		passenger.luggage = luggages;

		passengers[i] = passenger;
	}

	std::cout << passengers[maxPassenger].name << std::endl << passengers[maxPassenger].luggage[maxLuggage].description;

	return 0;
}