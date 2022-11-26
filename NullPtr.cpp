#include <iostream>

int
main() {
    int num = 14;
    int *p_num{&num};

    if (p_num != nullptr) {
        std::cout << "Square of " << num << " is " << num * num << std::endl;
    }

    if (p_num) {
        std::cout << "Cube of " << num << " is " << num * num * num
                  << std::endl;
    }
    delete p_num;
    p_num = nullptr;

    return 0;
}
