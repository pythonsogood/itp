#include <iostream>

bool is_leap_year(int year) {
    return year % 4 == 0 && !(year % 100 == 0 & year % 400 != 0);
}

int main() {
    int a,b,c;

    std::cin >> a >> b >> c;

    a++;

    int days_in_month[] = {
        31, is_leap_year(c) ? 29 : 28, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31
    };

    int days_in_current_month = days_in_month[b-1];
    if (a > days_in_current_month) {
        a = 1;
        b++;
    }

    if (b > sizeof(days_in_month)/sizeof(days_in_month[0])) {
        b = 1;
        c++;
    }

    std::cout << a << " " << b << " " << c;

    return 0;
}