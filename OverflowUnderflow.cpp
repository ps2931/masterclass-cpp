#include <iostream>

int main() {

    // Overflow

    unsigned char data {253};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 254

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 255

    ++data; // overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 0

    std::cout << std::dec ;

    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 0

    --data; // underflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 255


    unsigned char char_var {55};
    char_var = 260; // Overflow warning
    char_var = -1; // Underflow

    return 0;
}

