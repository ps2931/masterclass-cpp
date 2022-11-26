#include <iostream>

int main() {
    // The compiler applies implicit conversions when types are different in an expression .
    // Conversions are always done from the smallest to the largest type.

    // Conversion rules:
    // int < unsigned int < long
    // unsigned long < long long < unsinged long long
    // float < fouble < long double

    double price {45.6};
    int units {10};

    auto total_price = price * units;

    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;

    // Implicit conversions in assignments
    // The assignment operation is going to cause an implicit
	// narrowing conversion , y is converted to int before assignment
    int x;
    double y {45.44};
    x = y;
    std::cout << "The value of x is : " << x << std::endl; // 45
    std::cout << "sizeof x : " << sizeof(x) << std::endl; // 4
    return 0;
}

