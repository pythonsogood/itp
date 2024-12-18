#include <iostream>
#include <cmath>

unsigned int factorial(int n) {
    unsigned int a = 1;
    for (int i=1; i<n; ++i) {
        a *= i+1;
    }
	return a;
}

int main() {
    int n;

    std::cin >> n;

    double a = 0;

    for (int k=0; k<=n; ++k) {
        a+= (pow(-1, k)*(k+1))/(factorial(k));
    }

    std::cout << a;

    return 0;
}