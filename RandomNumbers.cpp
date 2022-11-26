#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

    std::srand(std::time(0)); // seed

    int random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 836051817

    random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 1062017771

    // Generate random number in a range
    for (size_t i{0}; i<5; i++){
        random_num = std::rand() % 11;
        std::cout << "random_num " << i << " : " <<  random_num << std::endl;
    }
    std::cout << "DONE" << std::endl;

    // Range [1~15]
    int random_num2 = (std::rand() % 15) + 1; // [1~15]

    for(size_t i{0}; i<5; i++){
        int random_num = (std::rand() % 15) + 1;
        std::cout << "number : " << random_num << std::endl;
    }

    return 0;
}

