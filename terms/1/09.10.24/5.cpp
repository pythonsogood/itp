#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    bool found = false;

    for (int i=0; i<n; ++i) {
        if (!found) {
            if (s[i] == ':') {
                found = true;
            }
        } else {
            std::cout << s[i];
        }
    }

    return 0;
}