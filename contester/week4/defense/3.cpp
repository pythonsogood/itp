#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    char a[n];

    std::cin >> a;

    int start = -1;
    int end = -1;

    for (int i=n-1; i>=0; --i) {
        if (a[i] == '!') {
            if (end == -1) {
                end = i;
            } else if (start == -1) {
                start = i;
            }
        }
    }

    for (int i=start+1; i<end; ++i) {
        std::cout << a[i];
    }

    return 0;
}