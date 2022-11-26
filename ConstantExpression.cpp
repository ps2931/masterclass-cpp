#include <iostream>

int main() {

    // constexpr is an expression that evaluate to a constant - for declaration of:
    // 1. Array bounds
    // 2. Selectors in case statements
    // 3. Bit-field lenght specification
    // 4. Enumeration initializers

    constexpr int SOME_LIB_MAJOR_VERSION {1236};

    constexpr int eye_count {2};

    constexpr double PI {3.14};

    int leg_count {2}; // Non constexpr, leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error

    constexpr int room_count{10};
	constexpr int door_count{room_count};// OK

	const int table_count{5};
	constexpr int chair_count{ table_count * 5}; // Works

    return 0;
}

