#include <iostream>

int main() {

    // Constants once initialized cannot be re-initialized.

    // The const is c++ construct and applied on variable name instead of
    // variable value in memory.

    const int age {34};
    const float height {1.67f};

    //age = 55; // Can't modify
    //height = 1.8f;


    int years { 3 * age};

    std::cout << "age : " << age << std::endl;
    std::cout << "height : " << height << std::endl;
    std::cout << "years : " << years << std::endl;

    return 0;
}

