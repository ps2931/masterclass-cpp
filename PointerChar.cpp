#include <iostream>

int main() {

    char char_var {'A'};
    char *p_char_var {&char_var};

    std::cout << "The value stored in p_char_var is " << *p_char_var << std::endl;

    // You can also initialize char pointer with string literal: C-string
    // Without const keyword, you'll get a warning.
    // NOTE: This is not recommended.
    const char *p_message {"Hello World!"};
    std::cout << "message : " << p_message << std::endl; // Hello World!
    std::cout << "message : " << *p_message << std::endl; // H
    // In second case compiler will expand the string to an array of characters
    // or to be specific, an array of const chars. *p_message will be pointing to
    // the first character in that array.

    char message_1[] {"Hello World!"};
    message_1[0] = 'B';
    std::cout << "message_1 : " << message_1 << std::endl;


    // Arrays of pointer to char
    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"
    };

    // The problem with above char[] is string length is limited to 90.
    // If string is less than 90 then memory wiil be wasted.

    // Another way to define the above array is:
    const char* predictions_2 []  {
        "a lot of kids running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before."
    };


    // for ( const char* st : predictions_2 ) {
    for (const char* st : predictions_2 ) {
        std::cout << st << std::endl;
    }


    // const pointer and pointer to const

    int number {5}; // Not constant, can change number any way we want
    number += 10;
    std::cout << number << std::endl;

    // Pointer : Can modify the data and the pointer itself
    int *p_num1 {nullptr};
    int num1{23};

    p_num1 = &num1;
    std::cout << "Address: " << p_num1 << std::endl;
    std::cout << "Value: " << *p_num1 << std::endl;

    // Changing the variable value through pointer
    *p_num1 = 9999;
    std::cout << "Address: " << p_num1 << std::endl;
    std::cout << "Value: " << *p_num1 << std::endl;

    // Change the pointer itself to make it point somewhere else
    int smallest_prime = 3;
    p_num1 = &smallest_prime;
    std::cout << "Address: " << p_num1 << std::endl;
    std::cout << "Value: " << *p_num1 << std::endl;


    // Pointer to const
    // Pointer pointing to constant data.
    // You cannot modify the data through pointer
    int number2 {643};
    const int* p_num2 {&number2};
    std::cout << "Address: " << p_num2 << std::endl;
    std::cout << "Value: " << *p_num2 << std::endl;

    // ERROR - cannot change read only variable
    // *p_num2 = 56;

    // Pointer can be changed to point to something else
    int smallest_even = 2;
    p_num2 = &smallest_even;
    std::cout << "Address: " << p_num2 << std::endl;
    std::cout << "Value: " << *p_num2 << std::endl;


    // Both pointer and pointed to value are constant
    const int number3 {146};
    const int* const p_num3 {&number3};
    std::cout << "Address: " << p_num3 << std::endl;
    std::cout << "Value: " << *p_num3 << std::endl;

    // Cannnot modify the value through pointer
    // *p_num3 = 222; ERROR

    // Cannnot modify the pointer to have address of another variable
    // p_num3 = &number2; ERROR

    // Pointer is constant but value is not
    int number4 {901};
    int* const p_num4 {&number4};
    std::cout << "Address: " << p_num4 << std::endl;
    std::cout << "Value: " << *p_num4 << std::endl;

    *p_num4 = 456;
    std::cout << "Value: " << *p_num4 << std::endl;

    int number5 = 1001;
    // p_num4 = &number5; ERROR - cannot change pointer address

    return 0;
}

