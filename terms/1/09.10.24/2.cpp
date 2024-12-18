#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    int count = 0;

    for (int i=0; i<n-2; ++i) {
        if (s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') {
            count++;
        }
    }

    std::cout << (count > 0 ? count : -1) << std::endl;

    return 0;
}