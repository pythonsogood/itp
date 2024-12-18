#include <iostream>

int main(int argc, char *argv[]) {
    int n;
    std::cin >> n;

    int a[n+1];

    for (int i=0; i<=n; ++i) {
        a[i] = i;
    }

    int step = 2;
    while (true) {
        for (int i=0; i<=n; i+=step) {
            a[i] = -1;
        }
        a[step] = step;

        bool found = false;

        for (int i=0; i<=n; ++i) {
            if (a[i] != -1 && a[i] > step) {
                step = a[i];
                found = true;
                break;
            }
        }

        if (step >= n || !found) {
            break;
        }
    }

    for (int i=2; i<=n; ++i) {
        if (a[i] != -1) {
            std::cout << a[i] << " ";
        }
    }

    return 0;
}