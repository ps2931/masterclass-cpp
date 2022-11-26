#include <iostream>

int
main() {

    // Declare and initialize pointer
    int *p_num{};   // will initialize with nullptr
                    // can only store address of a int type variable

    double *p_fractional_number{};   // can only store address of a double type
                                     // variable

    // Explicitly initialize with nullptr
    int *p_num1{nullptr};

    // A pointer type variable has same size.

    // Position of * does not matter
    int *p_num2{nullptr};
    int *p_num3{nullptr};
    int *p_num4{nullptr};

    // NOTE: Never use a point which is not initialized (nullptr).

    // Confusing, is other_int_var & other_int_var2 are pointers as well.
    // Only p_num5 and p_num6 are pointers
    int *p_num5{}, other_int_var{};

    // It is better to separate these declarations on different lines though
    int *p_num7{};
    int other_int_var3;

    // Assigning daa to pointer variable
    int int_var{43};
    int *p_int{&int_var};   // The address of operator (&)

    std::cout << "Int var : " << int_var << std::endl;   // 43
    std::cout << "p_int (Address in memory) : " << p_int
              << std::endl;   // 0x7ffdea3f605c

    // NOTE: An int variable requires an int pointer and so on.
    double price = 56.38;
    double *p_price{&price};   // pointer to double variable

    std::cout << "price: " << price << std::endl;
    std::cout << "price address: " << p_price << std::endl;

    // size of pointer variable
    std::cout << "size of int pointer " << sizeof(int *) << std::endl;   // 8
    std::cout << "size of double pointer " << sizeof(double *)
              << std::endl;   // 8

    // Dereferencing a pointer
    // Reading a variables value using a pointer
    int length = 119;
    int *p_length{&length};
    std::cout << "Length is " << *p_length << std::endl;

    const char *students[]{
        "Daniel Gray",
        "Phillip Marcos",
        "Lucas Bratzi",
        "Alan Woodpecker",
    };

    // *students[0] = 'K'; Not allowed
    // The content itself is constant

    // But pointer can point to a new content since pointer is not constant
    // and hence this is allowed.
    const char *new_student{"Bob the Builder"};
    students[0] = new_student;
    for (const char *student : students) {
        std::cout << student << std::endl;
    }

    //------------------------
    // Pointers and Arrays
    //------------------------
    int scores[5]{34, 52, 12, 56, 78};
    int *p_score{scores};
    // Print address
    std::cout << "scores: " << scores << std::endl;     // 0x7ffe58a2dfe0
    std::cout << "p_score: " << p_score << std::endl;   // 0x7ffe58a2dfe0

    // Print the content at that address
    // The array name can be treated as pointer to first element.
    std::cout << std::endl;
    std::cout << "Printing out data at array address : " << std::endl;
    std::cout << "*scores : " << *scores << std::endl;         // 34
    std::cout << "scores[0] : " << scores[0] << std::endl;     // 34
    std::cout << "*p_score : " << *p_score << std::endl;       // 34
    std::cout << "p_score[0] : " << p_score[0] << std::endl;   // 34

    // std::size() doesn't work for raw pointers.
    std::cout << "size: " << std::size(scores) << std::endl;   // 5
    // ERROR: std::cout << "size: " << std::size(p_score) << std::endl;

    // Dangling pointer
    int *p_ptr1;

    std::cout << "Uninitialized pointer: " << std::endl;
    // std::cout << p_ptr1 << std::endl; // COMPILE BUT CRASH

    int *p_ptr2{new int{54}};
    delete p_ptr2;
    // std::cout << p_ptr2; COMPILE BUT CRASH

    int *p_ptr3{new int{12}};
    int *p_ptr4{p_ptr3};
    delete p_ptr3;
    // std::cout << p_ptr4 << std::endl;   // COMPILE BUT CRASH

    // The `new` operator allocate memory for a variable on free store.

    // Memory leaks
    { int *p_num2{new int{57}}; }
    // *p_num2 is out of scope.
    // Memory with int{57} leaked.
    return 0;
}
