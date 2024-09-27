#include <iostream>

bool is_prime(int a) {
    for (int i=2; i<a; ++i) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    int n;
    std::cin >> n;

    if (is_prime(n)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}