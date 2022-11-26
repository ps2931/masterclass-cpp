#include <iostream>
#include <bitset>

int main() {

    // Shifting left multiplies by 2^n
    // Shifting right divides by 2^n

    unsigned short int value {0xff0u};
    std::cout << "Size of short int : " << sizeof(short int) << std::endl; // 16 bit

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    // value : 0000111111110000, dec : 4080

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    // value : 0001111111100000, dec : 8160

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    // value : 0011111111000000, dec : 16320

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    // value : 0111111110000000, dec : 32640

    // Shift right by 3 bit
    value = static_cast<unsigned short int>(value >> 3);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    // value : 0000111111110000, dec : 4080



    return 0;
}

