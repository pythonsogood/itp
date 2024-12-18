#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;

    int a;
    int b;

    std::cout << "Enter number a:\n>>> ";
    std::cin >> a;
    std::cout << "Enter number b:\n>>> ";
    std::cin >> b;

    std::cout << "Sum is:" << std::endl;
    std::cout << a + b << std::endl;

    return 0;
}