#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int a[n];
    int sort_start = -1;
    int sort_end = -1;

    for (int i=0; i<n; ++i) {
        std::cin >> a[i];
        if (a[i] == 0) {
            if (sort_start == -1) {
                sort_start = i;
            } else if (sort_end == -1) {
                sort_end = i;
            }
        }
    }

    for (int i=sort_start; i<sort_end; ++i) {
        for (int j=sort_start; j<sort_end-i; ++j) {
            if ((a[j] > a[j+1])) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i=0; i<n; ++i) {
        std::cout << a[i] << " ";
    }

    return 0;
}