#include <iostream>

int
main() {
    // auto is a keyword, which allows compile to deduce the type
    auto var1{12};
    auto var2{12.45f};
    auto var3{12.4};
    auto var4{12.98l};   // long double
    auto var5{'r'};

    // int modifier suffixes
    auto var6{123u};    // unsigned
    auto var7{123ul};   // unsigned long
    auto var8{123LL};   // long long

    std::cout << "var1 occupies: " << sizeof(var1) << " bytes"
              << std::endl;   // 4 bytes
    std::cout << "var2 occupies: " << sizeof(var2) << " bytes"
              << std::endl;   // 4 bytes
    std::cout << "var3 occupies: " << sizeof(var3) << " bytes"
              << std::endl;   // 8 bytes
    std::cout << "var4 occupies: " << sizeof(var4) << " bytes"
              << std::endl;   // 16 bytes
    std::cout << "var5 occupies: " << sizeof(var5) << " bytes"
              << std::endl;   // 1 byte
    std::cout << "var6 occupies: " << sizeof(var6) << " bytes"
              << std::endl;   // 4 bytes
    std::cout << "var7 occupies: " << sizeof(var7) << " bytes"
              << std::endl;   // 8 bytes
    std::cout << "var8 occupies: " << sizeof(var8) << " bytes"
              << std::endl;   // 8 bytes
}
