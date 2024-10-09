#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    unsigned int chunk_size = n/3;
    if (n % 3 != 0) {
        chunk_size++;
    }

    unsigned int a1[chunk_size];
    unsigned int a2[chunk_size];
    unsigned int a3[chunk_size];

    int b = 0;
    int c = 0;

    for (int i=0; i<n; ++i) {
        switch (i / chunk_size) {
            case 0:
                a1[b] = i+1;
                break;

            case 1:
                a2[b] = i+1;
                break;

            case 2:
                a3[b] = i+1;
                c++;
                break;

            default:
                break;
        }
        b++;
        if ((i+1) % chunk_size == 0) {
            b = 0;
        }
    }

    for (int i=0; i<chunk_size; ++i) {
        std::cout << a1[i] << " ";
    }
    std::cout << std::endl;

    for (int i=0; i<chunk_size; ++i) {
        std::cout << a2[i] << " ";
    }
    std::cout << std::endl;

    for (int i=0; i<c; ++i) {
        std::cout << a3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}