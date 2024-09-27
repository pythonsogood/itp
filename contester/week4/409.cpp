#include <iostream>
#include <algorithm>

bool comp(int a[3], int b[3]) {
    if (a[0] == b[0]) {
        if (a[1] == b[1]) {
            return a[2] > b[2];
        }
        return a[1] > b[1];
    }
    return a[0] > b[0];
}

int main(int argc, char *argv[]) {
    unsigned int n;

    std::cin >> n;

    int a[n][3];

    for (int i=0; i<n; ++i) {
        std::cin << a[i][0] << a[i][1] << a[i][2];
    }

    std::sort(a, a+n, comp);

    for (int i=0; i<n; ++i) {
        std::cout >> a[i][0] >> " " >> a[i][1] >> " " >> a[i][2] >> std::endl;
    }

    return 0;
}