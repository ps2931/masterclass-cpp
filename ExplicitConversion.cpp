#include <iostream>

int main() {

    // Explicit conversion: conversion done manually.

    double x {12.5};
    double y {34.6};

    int sum = x+ y;
    std::cout << "Sum is : " << sum << std::endl; // 47

    // Explicit casting
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "Sum after explicit cast is : " << sum << std::endl; // 46

    // Another way of explicit casting
    sum = static_cast<int>(x+y);
    std::cout << "Sum after explicit cast is : " << sum << std::endl; // 47

    double PI {3.14};

    // Old C style cast
    int int_pi_c_style = (int)PI;
    std::cout << int_pi_c_style << std::endl; // 3

    // C++ style
    int int_pi = static_cast<int>(PI);
    std::cout << "PI : " << PI << std::endl; // 3.14
    std::cout << "int_pi : " << int_pi << std::endl; // 3

    return 0;
}

