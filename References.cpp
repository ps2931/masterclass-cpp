#include <iostream>

int
main() {
    // Reference is an alias for an object.
    // Changing the reference changes the state of the referent.
    // Unlike pointers:
    //  - you cannot have NULL references.
    //  - once initialized, it cannot be changed to refer to another object.
    //  - a reference must be initialized when it is created.

    int int_value{45};
    double double_value{33.65};

    int &ref_to_int_value_1{int_value};    // initialization
    int &ref_to_int_value_2 = int_value;   // assignment
    double &ref_to_double_value_1{double_value};

    // int& some_reference; ERROR
    // You've to declare and initialize in one statement.

    std::cout << "int_value : " << int_value << std::endl;         // 45
    std::cout << "double_value : " << double_value << std::endl;   // 36.65
    std::cout << "ref_to_int_value_1 : " << ref_to_int_value_1
              << std::endl;   // 45
    std::cout << "ref_to_int_value_2 : " << ref_to_int_value_2
              << std::endl;   // 45
    std::cout << "ref_to_double_value_1 : " << ref_to_double_value_1
              << std::endl;   // 33.65

    std::cout << "===========================\n";

    std::cout << "&int_value : " << &int_value << std::endl;   // 0x7ffd60c3a424
    std::cout << "&double_value : " << &double_value
              << std::endl;   // 0x7ffd60c3a428
    std::cout << "&ref_to_int_value_1 : " << &ref_to_int_value_1
              << std::endl;   // 0x7ffd60c3a424
    std::cout << "&ref_to_int_value_2 : " << &ref_to_int_value_2
              << std::endl;   // 0x7ffd60c3a424
    std::cout << "&ref_to_double_value_1 : " << &ref_to_double_value_1
              << std::endl;   // 0x7ffd60c3a428

    std::cout << "===========================\n";

    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;      // 4
    std::cout << "sizeof(int&) : " << sizeof(int &) << std::endl;   // 4
    std::cout << "sizeof(ref_to_double_value_1) : "
              << sizeof(ref_to_double_value_1) << std::endl;   // 8

    std::cout << "===========================\n";

    // const and reference
    int age{26};
    int &ref_age{age};
    ref_age++;
    std::cout << "age : " << age << std::endl;           // 27
    std::cout << "ref_age : " << ref_age << std::endl;   // 27

    std::cout << "===========================\n";

    // const reference
    age = 30;
    const int &const_ref_age{age};
    std::cout << "age : " << age << std::endl;                       // 30
    std::cout << "const_ref_age : " << const_ref_age << std::endl;   // 30

    // ERROR: const_ref_age = 33;

    // Range bases for loop with references

    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // score is copy so no change to original array
    for (auto score : scores) {
        score = score * 10;
    }

    // use reference if you want to change the original array
    for (auto &score : scores) {
        score = score * 10;
    }
    // Print array
    for (auto score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;


    return 0;
}
