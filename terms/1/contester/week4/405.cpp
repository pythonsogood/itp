#include <iostream>

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int maximum;
    int maximum_count = 0;

    int a;
    for (int i=0; i<n; ++i) {
        std::cin >> a;
        if (a == maximum && maximum_count > 0) {
            maximum_count++;
        } else if (a > maximum || maximum_count == 0) {
            maximum = a;
            maximum_count = 1;
        }
    }

    std::cout << maximum_count;

    return 0;
}