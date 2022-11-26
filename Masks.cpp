#include <iostream>
#include <iomanip>
#include <bitset>


int main() {

    const int COLUMN_WIDTH {32};

    // A mask is used to clear one or more bits to 0, set one or more bits to 1 or
    // invert one or more bits as required.

    // Suppose that only part of my_value_a in which we are interested encompasses
    // bits 16 through 23, and we wish to clear the remaining bits to 0.
    // We can do that using bitwise AND operator.
    uint32_t value_a = 0xC6B64575U;
    uint32_t masked_value_b = value_a & 0x00FF0000U;

    std::cout << std::setw(COLUMN_WIDTH) << std::bitset<32>(value_a) << std::endl;
    // 11000110101101100100010101110101

    std::cout << std::setw(COLUMN_WIDTH) << std::bitset<32>(masked_value_b) << std::endl;
    // 00000000101101100000000000000000

    // If you see value b, all the digits of my_value_a except digits from 16 to 23
    // has been set to 0

    // In many cases, we may wish to copy these eight bits of interest into an 8-bit
    // variable. The way to do this is: first perform the shift operation (resulting in 0x0000C6B6)
    // and then perform a mask operation on the least-significant 8 bits using 0x000000FF

    uint32_t value_a1 = (value_a >> 16); // shift the number
    uint32_t masked_value_a1 = value_a1 & 0x000000FFU; // mask LSB 8 bits

    std::cout << std::bitset<32>(value_a) << std::endl;
    std::cout << std::bitset<32>(masked_value_a1) << std::endl;

    // 11000110 10110110 01000101 01110101
    // 00000000 00000000 00000000 10110110

    // Suppose we want to take whatever value is stored in value_a, preserving bits
    // 0 to 15 and 24 to 31 as-is. Also we want to set bits 16 to 23 to 1.

    uint32_t masked_value_a2 = value_a | 0x00FF0000U;
    std::cout << std::bitset<32>(masked_value_a2) << std::endl;
    // 11000110 10110110 01000101 01110101
    // 11000110 11111111 01000101 01110101

    return 0;
}

