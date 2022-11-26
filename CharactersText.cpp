#include <iostream>

int
main() {
    // Char occupy 1 byte in memory
    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    // It is possible to assigne a valid ASCII code to a char
    // variable, and the corresponding character will be stored in.
    // You can choose to interpret that either as a character or as
    // a regular integer value.
    char value = 65;
    std::cout << "value: " << value << std::endl;                          // A
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;   // 65
}
