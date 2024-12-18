#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    for (int i=0; i<n; ++i) {
        if (s[i] == ':') {
            break;
        }
        std::cout << s[i];
    }

    return 0;
}