#include <iostream>

int main() {

    size_t i{0};

    // This do while loop will not print 5 and will exit at 11.
    do{
        if(i==5){
            ++i;
            continue;
        }

        if(i==11)
            break;


        std::cout << "i : " << i << std::endl;

        ++i;

    }while(i <20);

    return 0;
}

