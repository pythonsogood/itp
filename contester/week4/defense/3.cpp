#include <iostream>

int main(int argc, char *argv[]) {
    int n;

    std::cin >> n;

    char s[n];

    std::cin >> s;

    char ss[n*3];
    int ss_length = 0;
    for (int i=0; i<n; ++i) {
        if (s[i] == '.') {
            ss[ss_length] = '.';
            ss[ss_length+1] = '.';
            ss[ss_length+2] = '.';
            ss_length+=2;
        } else {
            ss[ss_length] = s[i];
        }
        ss_length++;
    }

    std::cout << ss << std::endl;

    return 0;
}