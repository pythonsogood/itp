#include <iostream>
#include <cmath>

int main() {
    unsigned int n;

    std::cin >> n;

    unsigned int first_half = n/2;
    unsigned int second_half = first_half+n%2+1;

    // O(1) time complexity arithmetic progression theory
    int sum = first_half*((1+first_half)/2);
    int sum2 = first_half*((second_half+n)/2);

    std::cout << sum << " " << sum2 << std::endl;

    return 0;
}