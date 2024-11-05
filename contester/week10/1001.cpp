#include <iostream>
#include <vector>
#include <string.h>

struct Train {
	int id;
	char* location;
	char* time;
};

int charLength(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

char toLowerCase(char* s) {
	int ascii = int(*s);
	return (ascii >= 'A' && ascii <= 'Z') ? char(ascii + int('a' - 'A')) : *s;
}

char toUpperCase(char* s) {
	int ascii = int(*s);
	return (ascii >= 'a' && ascii <= 'z') ? char(ascii + int('A' - 'a')) : *s;
}

void toLowerCaseArray(char* s) {
	int length = charLength(s);
	for (int i=0; i<length; ++i) {
		s[i] = toLowerCase(&s[i]);
	}
}

void toUpperCaseArray(char* s) {
	int length = charLength(s);
	for (int i=0; i<length; ++i) {
		s[i] = toUpperCase(&s[i]);
	}
}

void addTrain(std::vector<Train>* trains, int id, char* location, char* time) {
	char _location[2048];
	char _time[2048];

	std::strcpy(_location, location);
	std::strcpy(_time, time);

	(*trains).push_back(Train { id, _location, _time });
}

int main(int argc, char* argv[]) {
	int n;
	std::cin >> n;

	std::vector<Train> trains = {};

	for (int i=0; i<n; ++i) {
		int id;
		char location[2048];
		char time[2048];
		std::cin >> id >> location >> time;

		addTrain(&trains, id, location, time);
	}

	char destination[2048];
	std::cin >> destination;

	toLowerCaseArray(destination);

	std::cout << trains[2].location << std::endl;

	bool flag = false;

	for (int i=0; i<n; ++i) {
		char *location = trains[i].location;
		toLowerCaseArray(location);

		std::cout << location << " " << destination << std::endl;

		if (std::strcmp(location, destination) == 0) {
			toUpperCaseArray(location);

			std::cout << trains[i].id << "_" << location << "_" << trains[i].time;

			flag = true;
			break;
		}
	}

	if (!flag) {
		std::cout << "Impossible";
	}

	return 0;
}