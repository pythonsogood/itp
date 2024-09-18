#include <iostream>

bool is_leap_year(int year) {
    return year % 4 == 0 && !(year % 100 == 0 & year % 400 != 0);
}

int main() {
    int a,b,c;

    std::cin >> a >> b >> c;

    if (c < 1) {
        std::cout << "no";
    }

    int days_in_month[] = {
        31, is_leap_year(c) ? 29 : 28, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31
    };

    if (b < 1 || b > sizeof(days_in_month)/sizeof(days_in_month[0])+1) {
        std::cout << "no";
        return 0;
    }

    int days_in_current_month = days_in_month[b-1];

    if (a < 1 || a > days_in_current_month) {
        std::cout << "no";
        return 0;
    }

    std::cout << "yes";

    return 0;
}