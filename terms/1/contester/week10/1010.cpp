#include <iostream>

int main() {
	int board[8][8];

	int black = 0;
	int white = 0;
	int red = 0;
	int green = 0;

	for (int i=0; i<8; ++i) {
		char row[10];
		std::cin >> row;

		for (int j=0; j<8; ++j) {
			board[i][j] = row[j] - '0';

			switch (board[i][j]) {
				case 0:
					black++;
					break;

				case 1:
					white++;
					break;

				case 2:
					red++;
					break;

				case 3:
					green++;
					break;

				default:
					break;
			}
		}
	}

	if (black <= 0 || white <= 0 || red <= 0 || green <= 0) {
		std::cout << "BAD INPUT LIST";
		return 0;
	}

	for (int i=0; i<8; ++i) {
		for (int j=0; j<8; ++j) {
			std::cout << (board[i][j] == 2 ? "2" : "-");
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << black << " " << white << " " << red << " " << green;

	return 0;
}