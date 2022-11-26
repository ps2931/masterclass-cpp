#include <iostream>

int main() {

    // Declare Array of ints
    int scores [5]; // Garbage data

    // Read data
    std::cout << "scores [0] : " << scores[0] << std::endl;
    std::cout << "scores [1] : " << scores[1] << std::endl;

    // Read array with a loop
    for(size_t i{0}; i < 5; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    scores[0] = 20;
    scores[1] = 30;
    scores[2] = 40;
    scores[3] = 50;
    scores[4] = 60;
    // print it again
    for(size_t i{0}; i < 5; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    // size of array
    int arr_length = std::size(scores);
    std::cout << "Lenght of array : " << arr_length << std::endl;

    // Declare and initialize at the same time
    double heights[5] {5.7, 6.8, 6.1, 4.8, 5.2};

    for (size_t i{0}; i<5; i++){
        std::cout << heights[i] << " " ;
    }
    std::cout << std::endl;


    // If you don't initialize all the elements, those you leave out
    // are initialized to 0
    int weights[5] {80, 75, 55};
    for (size_t i{0}; i<5; i++) {
        std::cout << weights[i] << " ";
    }
    std::cout << std::endl;

    //Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17,23,56};
    for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}


    // read only array
    const int birds[] {10,12,15,11,18,17,23,56};

    // Array of characters
    char message [5] {'H', 'e', 'l', 'l', 'o'};
    for (auto c: message) {
        std::cout << c;
    }
    std::cout << std::endl;

    // Directly print char array
    std::cout << "array: " << message << std::endl;

    // Leteral C strings
    char message2 [] {"Hello"}; // An implicit '\0' character is appended to
                                // the end of the string, making it a c string.

    std::cout << "message2: " << message2 << std::endl;
    std::cout << "size: " << std::size(message2) << std::endl;


    return 0;
}

