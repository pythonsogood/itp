#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    int a = -1;
    int b = -1;

    for (int i=0; i<n; ++i) {
        if (s[i] == ':') {
            if (a == -1) {
                a = i;
            } else if (b == -1) {
                b = i;
            }
        }
    }

    for (int i=a+1; i<b; ++i) {
        std::cout << s[i];
    }

    return 0;
}