#include <iostream>

int
main() {

    ////////////////////////
    // Braced initialization
    ////////////////////////

    // WARN: Variable may contain random garbage value
    int elephant_count;   // Declare a variable

    int lion_count{};   // Declare and Initialize to 0

    int deer_count{10};   // Declare and Initialize to 10

    // Can use expression as initializer
    int wild_animals{lion_count + deer_count};

    // Won't compile, the expression in the braces uses undeclared variables
    // int bad_initialization { doesnt_exist + deer_count };

    // ERROR: Narrow conversion
    // int narrowing_conversion{2.9};

    /////////////////////////////////////
    // Functional Variable Initialization
    /////////////////////////////////////

    int apple_count(5);

    int orange_count(10);

    int fruit_count(apple_count + orange_count);

    // int bad_initialization_2 (doesnt_exist3 + doesnt_exist4);

    // Information loss. less safe than braced initializers
    int narrow_conversion_functional(2.9);
    std::cout << narrow_conversion_functional << std::endl;

    /////////////////////////////////////
    // Assignment Initialization
    /////////////////////////////////////

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrow_conversion_assignment = 2.9;
    std::cout << narrow_conversion_assignment << std::endl;

    /////////////////////////////////////
    // Size of a variable
    /////////////////////////////////////
    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of bike_count: " << sizeof(bike_count) << std::endl;

    //-----------------------
    // Integer Modifiers
    //-----------------------

    int value1{10};
    int value2{-19};

    // short, int, long & long long
    short short_var{-32768};                      // 2 bytes
    short int short_int{455};                     // 2 bytes
    signed short signed_short{122};               // 2 bytes
    signed short int signed_short_int{-456};      // 2 bytes
    unsigned short int unsigned_short_int{456};   // 2 bytes

    std::cout << "short_var: " << sizeof(short_var) << std::endl;
    std::cout << "short_int: " << sizeof(short_int) << std::endl;
    std::cout << "signed_short: " << sizeof(signed_short) << std::endl;
    std::cout << "signed_short_int: " << sizeof(signed_short_int) << std::endl;

    std::cout << "--------------------------" << std::endl;

    int int_var{55};                 // 4 bytes
    signed signed_var{66};           // 4 bytes
    signed int signed_int{77};       // 4 bytes
    unsigned int unsigned_int{77};   // 4 bytes

    std::cout << "int_var: " << sizeof(int_var) << std::endl;
    std::cout << "signed_var: " << sizeof(signed_var) << std::endl;
    std::cout << "signed_int: " << sizeof(signed_int) << std::endl;
    std::cout << "unsigned_int: " << sizeof(unsigned_int) << std::endl;

    std::cout << "--------------------------" << std::endl;

    long long_var{88};                         // 8 bytes
    long int long_int{33};                     // 8 bytes
    signed long signed_long{44};               // 8 bytes
    signed long int signed_long_int{44};       // 8 bytes
    unsigned long int unsigned_long_int{44};   // 8 bytes

    std::cout << "long_var: " << sizeof(long_var) << std::endl;
    std::cout << "long_int: " << sizeof(long_int) << std::endl;
    std::cout << "signed_long: " << sizeof(signed_long) << std::endl;
    std::cout << "signed_long_int: " << sizeof(signed_long_int) << std::endl;
    std::cout << "unsigned_long_int: " << sizeof(unsigned_long_int)
              << std::endl;

    std::cout << "--------------------------" << std::endl;

    long long long_long_var{888};                          // 8 bytes
    long long int long_long_int{999};                      // 8 bytes
    signed long long signed_long_long{444};                // 8 bytes
    signed long long int signed_long_long_int{1234};       // 8 bytes
    unsigned long long int unsinged_long_long_int{1234};   // 8 bytes

    std::cout << "long_long_var: " << sizeof(long_long_var) << std::endl;
    std::cout << "long_long_int: " << sizeof(long_long_int) << std::endl;
    std::cout << "signed_long_long: " << sizeof(signed_long_long) << std::endl;
    std::cout << "signed_long_long_int: " << sizeof(signed_long_long_int)
              << std::endl;
    std::cout << "unsinged_long_long_int: " << sizeof(unsinged_long_long_int)
              << std::endl;

    return 0;
}
