#include <iostream>

int
main() {
    // boolean takes 8 bits in memory

    bool red_light{true};
    bool green_light{false};

    if (red_light == true) {
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light) {
        std::cout << "The light is green" << std::endl;
    } else {
        std::cout << "The light is not green" << std::endl;
    }

    // Printing out a bool
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;       // 1
    std::cout << "green_light: " << green_light << std::endl;   // 0

    // Print out true and false
    std::cout << std::endl;
    std::cout << std::boolalpha;   // Forces the output format to true/false
    std::cout << "red_light: " << red_light << std::endl;       // true
    std::cout << "green_light: " << green_light << std::endl;   // false

    return 0;
}
