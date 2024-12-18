#include <iostream>
#include <string>

int main() {
    std::string s;

    std::getline(std::cin, s);

    int max = 0;

    for (int i=0; i<s.length(); ++i) {
        int current = 0;
        for (int j=i; j<s.length(); ++j) {
            if (s[j] != ' ') {
                break;
            }
            current++;
        }
        if (current > max) {
            max = current;
        }
    }

    std::cout << max << std::endl;

    return 0;
}