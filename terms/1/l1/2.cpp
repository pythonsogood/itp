#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    int a;

    while (a != 0) {
        std::cout << "Enter " << arr.size()+1 << " number:" << std::endl;
        std::cin >> a;
        arr.push_back(a);
    }

    std::cout << "end." << std::endl;

    int sum = 0;

    for (int i=0; i<arr.size(); i++) {
        sum += arr[i];
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}