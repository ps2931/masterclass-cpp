#include <iostream>

int
main() {
    // Arrays allocated on the heap with the new operator.
    size_t size{10};

    double *p_salaries{new double[size]};   // garbage values

    int *p_students{new (std::nothrow) int[size]{}};   // 0 initialized

    double *p_scores{new (std::nothrow) double[size]{
        1, 2, 3, 4,
        5}};   // first 5 initialized with 1,2,34,5 and the rest will be 0's.

    if (p_scores) {
        for (size_t i{}; i < size; ++i) {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i)
                      << std::endl;
        }
    }
    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    // Pointers initialized with dynamic arrays are different from arrays.
    // std::size doesn't work on them, and they don't support range based for
    // loops.
    double *temperatures = new double[size]{10.0, 20.0, 30.0, 40.0, 50.0,
                                            60.0, 70.0, 80.0, 90.0, 100.0};
    // std::cout << std::size(temperatures); //ERROR

    // Error: temperatures doesn't have array properties that are needed for the
    // range based for loop to work.
    // for (double t : temperatures) {
    //     std::cout << "temp: " << t << std::endl;
    // }
    // We can say that dynamically allocated array has decayed into a pointer.
    std::cout << "Done" << std::endl;
}
