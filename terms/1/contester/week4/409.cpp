#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int a[n][3];

    for (int i=0; i<n; ++i) {
        std::cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    for (int i=0; i<n-1; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if ((a[j][0] > a[j+1][0]) || (a[j][0] == a[j+1][0] && a[j][1] > a[j+1][1]) || (a[j][0] == a[j+1][0] && a[j][1] == a[j+1][1] && a[j][2] > a[j+1][2])) {
				for (int k=0; k<3; ++k) {
					int temp = a[j][k];
					a[j][k] = a[j+1][k];
					a[j+1][k] = temp;
				}
            }
        }
    }

    for (int i=0; i<n; ++i) {
        std::cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << std::endl;
    }

    return 0;
}