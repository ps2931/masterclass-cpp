#include <iostream>
#include <bitset>

int main() {

    unsigned short int data {0b11111110};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl; // 254
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl; // 0376
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl; // 0xfe
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl; // 0000000011111110


    return 0;
}

