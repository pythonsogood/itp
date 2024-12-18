// Known bugs
// Wrong Answer: test 8

#include <iostream>

int main(int argc, char *argv[]) {
	int a[10][10];

	for (int i=0; i<10; ++i) {
		for (int j=0; j<10; ++j) {
			std::cin >> a[i][j];
		}
	}

	int max_row = 1;
	int max_column = 1;
	for (int i=0; i<10; ++i) {
		int current_row = 0;
		int current_column = 0;
		for (int j=0; j<10; ++j) {
			if (a[i][j] == 0) {
				current_row++;
				if (current_row > max_row) {
					max_row = current_row;
				}
			} else {
				current_row = 0;
			}
			if (a[j][i] == 0) {
				current_column++;
				if (current_column > max_column) {
					max_column = current_column;
				} else {
					current_column = 0;
				}
			}
		}
	}

	std::cout << std::max(max_row, max_column);

	return 0;
}