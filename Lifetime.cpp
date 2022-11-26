#include <iostream>

int static_var1{80};

void some_function() {
    int local_var1 {30}; // dies at the end of the block
    static int static_var1 {40}; // dies when program ends
    int dynamic_var1 {50}; // You decide when it dies
}

int main() {

    {
        int local_var1 {10};  // dies at the end of the block
        int dynamic_var2 {60}; // you decide when it dies

        {
            int local_var2 {20};
            int dynamic_var3{70};
        }
    }

    return 0;
}

