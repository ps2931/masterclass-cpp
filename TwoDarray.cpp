#include <iostream>

int main() {
    int packages [] [4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {3,4,5,6}
    };

    for(size_t i{0} ; i < 3; ++ i){
        for(size_t j{0}; j < 4 ; ++j){
            std::cout << packages[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

