#include <iostream>

void move_to(int** x, int** y, char* direction, int length) {
	switch (direction[0]) {
		case 'N':
			*y = &(*y + length);
			break;

		case 'S':
			std::cout << *y << " " << length << std::endl;
		    *y = &(*y - length);
			break;

		case 'E':
            *x = &(*x + length);
            break;

		case 'W':
            *x = &(*x - length);
            break;

		default:
			break;
	}
}

int main(int argc, char *argv[]) {
	int* x = 0;
	int* y = 0;

	for (int i=0; i<3; ++i) {
		char direction[5];
		int length;

		std::cin >> direction >> length;

		move_to(&x, &y, direction, length);
		std::cout << *x << " " << *y << " " << length << std::endl;
	}

	std::cout << *x << " " << *y;

    return 0;
}