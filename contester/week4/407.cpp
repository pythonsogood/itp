#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    char a[n];

    std::cin >> a;

    int letters[int('Z')+1];

    for (int i=int('A'); i<=int('Z'); ++i) {
        letters[i] = 0;
    }

    for (int i=0; i<n; ++i) {
        letters[int(a[i])]++;
    }

    int unique_letters = 0;

    for (int i=int('A'); i<=int('Z'); ++i) {
        if (letters[i] > 0) {
            unique_letters++;
        }
    }

    std::cout << unique_letters << std::endl;

    for (int i=int('A'); i<=int('Z'); ++i) {
        if (letters[i] > 0) {
            std::cout << char(i) << " " << letters[i] << std::endl;
        }
    }


    return 0;
}