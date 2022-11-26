#include <iostream>

int main() {

    const size_t COUNT{5};

    for(unsigned int i{0}; i < COUNT; ++i) {
        std::cout << i << ":Hello, world" << std::endl;
    }
    std::cout << "Done" << std::endl;


    for(size_t i{0}; i < COUNT; ++i) {
        std::cout << i << ":Hello, world" << std::endl;
    }
    std::cout << "Done" << std::endl;

    // Range based for loop
    int prime_numbers [] {3,5,7,11,13,17,19,23};

    for(int n: prime_numbers) {
        std::cout << "n: " << n << std::endl;
    }

    // Specify the collection in place
    for (int value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the whole bag
        std::cout << "value : " << value << std::endl;
    }

    std::cout << "DONE!" << std::endl;

    // Auto type detection
    for(auto value : {1,2,3,4,5,6,7,8,9,10}) {
        std::cout << "value : " << value << std::endl;
    }

    // While loop
    const size_t COUNTER {10};
    size_t i{0};

    while(i < COUNTER ){ // Test
       std::cout << i << " : I love C++" << std::endl;

       ++i; // Incrementation
    }

    return 0;
}

