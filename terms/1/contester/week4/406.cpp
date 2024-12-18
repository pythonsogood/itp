#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    char a[n];

    std::cin >> a;

    int count = 0;

    for (int i=0; i<n; ++i) {
        if (a[i] == 'A') {
            count++;
        }
    }

    std::cout << count;

    return 0;
}