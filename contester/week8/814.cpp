#include <iostream>

void move_to(int** x, int** y, char* direction, int length) {
	switch (direction[0]) {
		case 'N':
		    int pos = *y + length;
			*y = &pos;
			break;

		case 'S':
		    int pos = *y - length;
			*y = &pos;
			break;

		case 'E':
            int pos = *x + length;
			*x = &pos;
            break;

		case 'W':
            int pos *x - length;
			*x = &pos;
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