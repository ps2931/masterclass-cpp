#include <iostream>
using namespace std;

int main() {

    constexpr int x{ 5 };
    constexpr int y{ 6 };
    std::cout << (x > y ? x : y) << " is greater!\n";


    constexpr bool condition {false};

    if constexpr (condition) {
        std::cout << "Condition is true" << std::endl;
    } else {
        std::cout << "Condition is false" << std::endl;
    }

    // if with initializer
    bool go {true};

    if(int speed {10}; go) {
         std::cout << "speed : " << speed << std::endl;

		if(speed > 5) {
			std::cout << "Slow down!" << std::endl;
		} else {
			std::cout << "All good!" << std::endl;
		}
    } else {
        std::cout << "speed : " << speed << std::endl;
		std::cout << "Stop" << std::endl;
    }
    // speed variable is not accessible here

    // similalry we can define a variable in switch statement

    return 0;
}

