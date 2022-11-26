#include <iostream>

int
main() {
    int value{45};

    //  Compound assignment operator
    std::cout << "The value is: " << value << std::endl;   // 45
    value += 5;
    std::cout << "The value is: " << value << std::endl;   // 50
    value -= 5;
    std::cout << "The value is: " << value << std::endl;   // 45
    value *= 2;
    std::cout << "The value is: " << value << std::endl;   // 90
    value /= 3;
    std::cout << "The value is: " << value << std::endl;   // 30
    value %= 11;
    std::cout << "The value is: " << value << std::endl;   // 8

    // Relational operators
    int number1{45};
    int number2{60};

    std::cout << std::boolalpha;
    std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2: " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2: " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2: " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2: " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2: " << (number1 != number2) << std::endl;

    // Logical operators
    // AND - &&
    // OR - ||
    // NOT - !

    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout << " a && b: " << (a && b) << std::endl;
    std::cout << " a && c: " << (a && c) << std::endl;
    std::cout << " a && b && c: " << (a && b && c) << std::endl;

    std::cout << "-------------------------------" << std::endl;

    std::cout << " a || b: " << (a || b) << std::endl;
    std::cout << " a || c: " << (a || c) << std::endl;
    std::cout << " a || b || c: " << (a || b || c) << std::endl;

    std::cout << "-------------------------------" << std::endl;

    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    std::cout << "-------------------------------" << std::endl;

    // Combinations of all these operators
    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;

    std::cout << "-------------------------------" << std::endl;

    // Combining logical operators with relational operators
    int d{45};
    int e{20};
    int f{11};

    std::cout << std::endl;
    std::cout << "Relational and logic operations on integers" << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout << "-------------------------------" << std::endl;

    std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f))
              << std::endl;   // true
    std::cout << "(d==e) || (e <= f ) : " << ((d == e) || (e <= f))
              << std::endl;   // false
    std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f))
              << std::endl;   // true
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f))
              << std::endl;   // false
    std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d))
              << std::endl;   // true
    std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f))
              << std::endl;   // false
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e))
              << std::endl;   // false
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e))
              << std::endl;   // false
}
