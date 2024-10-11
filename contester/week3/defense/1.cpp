#include <iostream>

int main(int argc, char *argv[]) {
    int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    char ss[n];
    for (int i=0; i<n; ++i) {
        ss[i] = s[i] == '!' ? '+' : s[i];
    }

    std::cout << ss << std::endl;

    return 0;
}