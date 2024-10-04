#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int sum_main = 0, sum_sec = 0;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            int a;
            std::cin >> a;

            if (j==i) {
                sum_main += a;
            } else if ((n-1)-j==i) {
                sum_sec += a;
                std::cout << " =" << a << "= ";
            }
        }
    }

    std::cout << sum_main << " " << sum_sec;

    return 0;
}