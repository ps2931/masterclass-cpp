#include <iostream>

int
main() {
    // Exception
    for (size_t i{0}; i < 100; i++) {
        try {
            int *data = new int[1000000000000000000];
            std::cout << "All well" << std::endl;
        } catch (std::exception &ex) {
            std::cout << " Something went wrong : " << ex.what() << std::endl;
        }
    }

    // handling exception instead of throwing it
    for (size_t i{0}; i < 100; i++) {
        int *data = new (std::nothrow) int[1000000000000000000];
        if (data != nullptr) {
            std::cout << "Data allocated" << std::endl;
        } else {
            std::cout << "Data allocation failed" << std::endl;
        }
    }
}
