// Known issues:
// CONTESTER DOES NOT GIVE NUMBER OF ROWS!!!

#include <iostream>

void move_to(int* xy, char* direction, int length) {
	if (direction[0] == 'N') {
 		xy[1] += length;
	} else if (direction[0] == 'S') {
		xy[1] -= length;
	} else if (direction[0] == 'E') {
        xy[0] += length;
    } else if (direction[0] == 'W') {
        xy[0] -= length;
	}
}

int main(int argc, char *argv[]) {
	int xy[2] = {0, 0};

	for (int i=0; i<3; ++i) {
		char direction[8];
		int length;
		std::cin >> direction >> length;

		move_to(xy, direction, length);
	}

	std::cout << xy[0] << " " << xy[1];

    return 0;
}