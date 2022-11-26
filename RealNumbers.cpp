#include <iomanip>
#include <iostream>

int
main() {
    // Default type for real numbers is Double
    float number1{1.1234568901234567890f};   // 4 bytes, notice f at the end
    double number2{1.1234568901234567890};   // 8 bytes
    long double number3{
        1.1234568901234567890L};   // 16 bytes, notice L at the end

    // Print out the sizes
    std::cout << "float size: " << sizeof(float) << std::endl;
    std::cout << "double size: " << sizeof(double) << std::endl;
    std::cout << "long double size: " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);
    std::cout << "float number1: " << number1
              << std::endl;   // 1.1234568357467651367, 7 digit precision
    std::cout << "float number2: " << number2
              << std::endl;   // 1.1234568901234567306, 15 digit precision
    std::cout << "float number3: " << number3
              << std::endl;   // 1.123456890123456789, 15+ digits

    // Float problems : The precision is usually too limited
    // for a lot of applications
    float number4 = 192400023.0f;   //
    std::cout << "number4 : " << number4 << std::endl;
    // 192400016; after 0's we have junk (23)

    // Scientific notation
    double number5{192400023};
    double number6{1.92400023e8};   // same as number5
    double number7{1.924e8};
    double number8{0.00000000003498};
    double number9{3.498e-11};   // same as number8

    // Infinity and NaN
    double number10{5.6};
    double number11{};   // initialized to 0
    double number12{};   // initialized to 0

    // Infinity
    double result{number10 / number11};   // divide by 0

    // Result: inf
    std::cout << number10 << "/" << number11 << " yields " << result
              << std::endl;
    // Result: inf
    std::cout << result << " + " << number10 << " yields " << result + number10
              << std::endl;

    // Result: NaN
    result = number11 / number12;
    // Result: -nan
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0;
}
