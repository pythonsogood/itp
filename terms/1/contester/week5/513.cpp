#include <iostream>
#include <string.h>

int main(int argc, char *argv[]) {
    char dict[][2][10] = {
        {"Tom", "555-3322"},
        {"Mary", "555-8976"},
        {"Jon", "555-1037"},
        {"Rachel", "555-1400"},
        {"Sherry", "555-8873"},
    };

    char name[8];

    std::cin >> name;


    for (int i=0; i<sizeof(dict)/sizeof(dict[0]); ++i) {
        if (strcmp(name, dict[i][0]) == 0) {
            std::cout << dict[i][1];
            return 0;
        }
    }

    std::cout << "Not found";

    return 0;
}