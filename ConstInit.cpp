#include <iostream>
using namespace std;

const int val1 {33};
constexpr int val2{34};
int val3 {35}; // Run time value


constinit int age = 88; // This is initialized at compile time
const constinit int age1 {val1}; // const and constinit can be combined
constinit int age2 {age1}; // Initializing with age would lead to a compiler error
                                 // age is not const
//constinit int age3 {val3}; // Error : val3 is evaluated at run time
                           // can't const initialize age3
const constinit double weight {33.33};
// constexpr constinit double scale_factor{3.11}; // Can't combine constexpr and constinit

int main() {
    // C++20 feature
    // constinit variable should be initialized at compile time.

    // You cannot initialize constinit dynamically.

    // constinit must be initialized with const or literals.

    // constinit can only be applied to variables with static or thread storage
    // duration. This, in part means variables outside the scope of the main().

    // const and constinit can be combined, but const and constexpr cannot be
    // combined in an expression.

    // Note that, const init doesn't imply that the variable is const. It just
    // implies that the compiler enforces initialization at compile time.


    //constinit double height{1.72};

    std::cout << "age : " << age << std::endl;
    std::cout << "age1 : " << age1 << std::endl;
    std::cout << "age2 : " << age2 << std::endl;

    age =33; // Can change a const init variable
    std::cout << "age : " << age << std::endl;

    //Combining const and constinit
    std::cout << "weight : " << weight << std::endl;
    //weight = 44.44; // Compiler Error

    return 0;
}

