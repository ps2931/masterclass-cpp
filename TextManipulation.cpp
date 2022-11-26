#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

// The cctype header file declares a set of functions to classify and transform individual characters.

void runCharManipulation() {
    //Check if a character is alphanumeric
    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl; // 8
    std::cout << "% is alphanumeric : " << std::isalnum('%') << std::endl; // 0

    // Check is a character is albhabet
    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl; // 1024
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl; // 0

    // Check if a character is blank
    std::cout << " ' ' is blank : " << std::isblank(' ') << std::endl; // 1
    std::cout << " A is blank : " << std::isblank('A') << std::endl; // 0

    // Check is a character is uppercase or lowercase
    std::cout << "Lowercase L : " << std::islower('L') << std::endl; // 0
    std::cout << "Lowercase L : " << std::islower('r') << std::endl; // 512

    // Check if a char is digit
    std::cout << "Check digit: A : " << std::isdigit('A') << std::endl; // 0
    std::cout << "Check digit: 5 : " << std::isdigit('5') << std::endl; // 1

    // Convert case to lowercase
    char ch_lower = std::tolower('H');
    std::cout << "Lowercase: " << ch_lower << std::endl;
    return;
}

void cStrings() {
    // require cstring library
    // Check length of a string
    const char message [] {"The sky is blue"};
    std::cout << "Length of message : " << std::strlen(message) << std::endl; // 15 - ignores null character
    std::cout << "Lenght of message : " << sizeof(message) << std::endl; // 16 - includes null character

    // Array decays into pointer when we use const char*
    const char* message1 {"The sky is blue"};
    std::cout << "Lenght of message1 : " << sizeof(message1) << std::endl; // 8 - pointer size
    std::cout << "Length of message1 : " << std::strlen(message1) << std::endl; // 15 - string lenght

    // Compare strings
    // int strcmp(const char *lhs, const char *rhs)
    // -1 lhs < rhs
    // 0  lhs = rhs
    // 1 lhs > rhs
    const char *string_data1 {"Albama"};
    const char *string_data2 {"Blabama"};

    // -1
    std::cout << "String Comparison : " << std::strcmp(string_data1, string_data2) << std::endl;

    // std::strncmp - compares n characters in the string
    size_t n{3};
    std::cout << "Compare first 3 characters : " << std::strncmp(string_data1, string_data2, n) << std::endl;
    // -1

    string_data1 = "aaaia";
    string_data2 = "aaance";
    std::cout << "str::strncmp : " << std::strncmp(string_data1,string_data2, n) << std::endl;
    // 0

    // Search first occurence of a character
    const char *str {"Try not. Do or do not. There is no try"};
    char target = 'D';
    const char* result1 = std::strchr(str, target);
    std::cout << "Found " << target << " staring at " << result1 << "\n";

    // Search last occurence of a character
    char input[] = "/home/user/hello.cpp";
    char* result2 = std::strrchr(input, '/');
    std::cout << (++result2) << std::endl; // 'hello.cpp'

    // Concatenation
    char dest[50] = "Hello";
    char src[50] = "World";
    std::strcat(dest, src);
    std::strcat(dest, " Good Bye!");
    std::cout << "dest : " << dest << "\n";

    char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *source1 = new char[30]{',', 'T', 'h', 'e', 'K', 'i', 'n', 'g', '\0'};
    std::cout << std::strlen(dest1) << std::endl; // 8
    std::cout << std::strlen(source1) << std::endl; // 8
    std::strcat(dest1, source1);
    std::cout << dest1 << "\n";
    std::cout << std::strlen(dest1) << "\n"; // 16

    // Concatenate n characters of a string
    char dest2[50] {"Hello"};
    char source2[30] = {"There is a bird on my window"};
    std::cout << std::strncat(dest2, source2, 6) << std::endl; // HelloThere

    // Copy a string
    const char* source3 = "C++ is a multipurpose programming language";
    char *dest3 = new char[std::strlen(source3) + 1];

    std::strcpy(dest3, source3);
    std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl; // 8
    std::cout << "Lenght: " << std::strlen(dest3) << "\n"; // 42
    std::cout << "dest3 : " << dest3 << std::endl;

    // Copy n characters
    const char* source4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    std::strncpy(dest4, source4, 5);
    std::cout << "dest4 : " << dest4 << std::endl; // Hellof

}

void stdString() {
    // this requires include<string>
    std::string full_name; // Empty string
    std::string planet {"Earth, the gem of solar system"};
    std::string preferred_planet{planet}; // Initialize with an existing string
    std::string message {"Hello there", 5}; // Take 5 characters and Initialize the string
    std::string weird_message(4, 'a'); // Initialize with aaaa
    std::string greeting{"Hello World"};
    std::string saying_hello{greeting, 6, 5}; // Initialize with substring - World

    std::cout << full_name
        << planet << "\n"
        << preferred_planet << "\n"
        << message << "\n"
        << weird_message << "\n"
        << greeting << "\n"
        << saying_hello << "\n"
        << std::endl;


    // Concatenate strings
    std::string str1{"Hello"};
    std::string str2{"World"};
    std::string message1 = str1 + " " + str2;
    std::cout << message << "\n";
}

int main() {

    // runCharManipulation();
    // cStrings();
    stdString();
    return 0;
}


