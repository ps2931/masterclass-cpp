#include <iomanip>
#include <iostream>

int
main() {

    long *pnumber{};   // A pointer to type long
    // can only store address of a variabel of type long
    // by default a pointer variable is initialized to nullptr;

    // initializde explicitly
    long *pnumber1{nullptr};

    // what are they?
    long *pnumber2{}, pnumber3{};
    // pnumber2 is pointer to long initialized to nullptr
    // pnumber3 is number of type long, initialized to 0L

    // this is bit more clear
    long *pnumber4{}, pnumber5{};

    // All pointer variables for a given platform will have the same size.

    // Address-of operator
    long number6{12345L};
    long *pnumber6{&number6};

    // Let compiler deduce the type for you
    auto *mynumber{&number6};

    //-------------------------------------
    // Dereferencing pointers
    //-------------------------------------

    int unit_price{295};          // Item unit_price in cents
    int count{10};                // Number of items ordered
    int discount_threshold{25};   // Quantity threshold for discount
    double discount{0.07};   // Discount for quantities over discount_threshold

    int *pcount{&count};             // Pointer to count
    int *punit_price{&unit_price};   // Pointer to unit price

    // Calculate gross price
    // Gross price via pointers
    int price{*pcount * *punit_price};
    std::cout << "Price: " << price << std::endl;   // 2950

    //-------------------------------------
    // Pointers to Type Char
    //-------------------------------------
    // A pointer to char can be initialized with a string literal.

    char *pproverb{"A miss is as good as a mile."};   // Not recommended
    // The statement creates a null-terminated string literal (an array of
    // elements of type const char) from the character string and stores the
    // address of the first character in pproverb.

    // A string literal is a C-style char array that you're not supposed to
    // change. In other words, the type of the character in a string literal is
    // const. But it is not reflected in the type of our pointer.

    // ERROR
    // *pproverb = 'Z';

    // The correct approach to declare pointer is:
    const char *pproverb_2{"A miss is as good as a mile."};   // RECOMMENDED
    // pproverb is a pointer to const type, and that's what const char* tell us.

    std::cout << pproverb << std::endl;    // A miss is as good as a mile.
    std::cout << *pproverb << std::endl;   // A

    // But
    int a = 10;
    int *pa = &a;
    std::cout << pa << std::endl;    // 0x7fff0e8eff64
    std::cout << *pa << std::endl;   // 10

    // Clearly, the insertion operator << for cout treats pointers differently.

    //-------------------------------------
    // Arrays of Pointers
    //-------------------------------------
    const char *pstars[] = {"Lassie",       "Fatty Arbuckle", "Mae West",
                            "Clara Bow",    "Slim Pickens",   "Boris Karloff",
                            "Oliver Hardy", "Greta Garbo"};
    // This is a one-dimensionaly array of pointers defined such that the
    // compiler works out the array size from the number of initializing
    // strings. Defining array like this saves space and time.

    std::cout << "Your lucky star: " << pstars[3] << std::endl;   // Clara Bow

    //--------------------------------------------
    // Constant Pointers and Pointers to Constants
    //--------------------------------------------

    // In the code above, you've specified that the char elements pointed to by
    // the elements of the pstar array are constants. The compiler inhibits any
    // direct attemp to change these, so an assignment statement such as this
    // would be flagged as an error by the compiler.

    // *pshar[0] = 'Z'; // Will not compile

    // However, you could still legally write the next statement, which would
    // copy the address stored in the element on the RHS to the LHS.
    pstars[5] = pstars[6];

    // This hasn't changed the object pointed to by the sixt array element - it
    // has only changed the address stored in it, so the const specification
    // hasn't been contravened.

    // Now consider this:
    const char *const pstars_1[]{
        "Lassie",       "Fatty Arbuckle", "Mae West",     "Clara Bow",
        "Slim Pickens", "Boris Karloff",  "Oliver Hardy", "Greta Garbo"};

    // The extra const keyword following the element type specification defines
    // the elements as constant, so now the pointers and the strings they point
    // to are defined as constant. Nothing about this array can be changed.

    const char *my_favorite_star{"Lassie"};
    // An array that contains const char elements. That means compiler will not
    // all this:
    // my_favorite_star[1] = 'o';

    // The definition of my_favorite_star, however does not prevent you from
    // changing your mind about which star you prefer. This is because the
    // my_favorite_star variable itself is not const.
    // In other words, you're free to overwrite the pointer value stored in
    // my_favorite_star, as long as you overwrite it with a pointer that refers
    // to const char elements.

    my_favorite_star = "Mae West";
    my_favorite_star = pstars[1];

    // If you want to disallow such assignments, you've to add a second const to
    // protect the content of the my_favorite_star variable:
    const char *const forever_my_favorite{"Oliver Harddy"};

    // In summary, you can have three different situations that are using const
    // when applied to pointers and the things to which they point:

    // 1. A pointer to a constant - you can't modify what's pointed to, but you
    // can set the pointer to point to something else:
    const char *pstring{"Some tet that cannot be changed"};
    // This also applies to pointer to other types.
    const int avalue{20};
    const int *pvalue{&avalue};

    const int bvalue{50};
    pvalue = &bvalue;   // this is allowed

    // 2. A constant pointer - the address stored in the pointer can't be
    // changed. However the contents of that address aren't constant and can be
    // changed.
    int data{20};
    int *const pdata{&data};
    *pdata = 43;   // Allowed, as pdata point to a non-const int

    // Again, if data was declared as const, you could not initialize pdata with
    // &data. pdata can only point to a non-const variable of type int.

    // 3. A constant pointer to a constant: Neither pointer nor item pointed to
    // can be changed.

    const float value{3.1415f};
    const float *const pvalue1{&value};

    // Tip: Read these type of declarations from right to left.
    // E.g
    float const *const pvalue2{&value};
    // from rigth to left - pvalue2 is a const pointer to const float.
    const float *const pvalue3{&value};
    // from righ to left - pvalue3 is a const pointer to float which is
    // constant

    //--------------------------------------------
    // Pointers and Arrays
    //--------------------------------------------
    // An array name by itself mostly behaves like a pointer when it's used in
    // an output statement,for instance. That is, if you try to output an array
    // by just using its name, you'll just get the hexadecimal address of the
    // array - unless it's a char array, of course, for which all standard
    // output stream assume it concerns a C-style string.
    double values[]{3.4, 9.1, 4.7, 8.3};
    double *pvalue4{values};
    // This will store the address of the values array in the pointer pvalue.
    // Although an array name represents an address, it is not a pointer. You
    // can modify the address stored in a pointer, whereas the address that an
    // array name represents is fixed.

    //--------------------------------------------
    // Pointer Arithmetic
    //--------------------------------------------
    // The address stored in the pointer won’t be incremented by 1 in the normal
    // arithmetic sense, however. Pointer arithmetic implicitly assumes that the
    // pointer points to an array. Incrementing a pointer by 1 means
    // incrementing it by one element of the type to which it points.

    // Subtracting one pointer from another is meaningful only when they are of
    // the same type and point to elements in the same array.
    long numbers[]{10, 20, 30, 40, 50, 60, 70, 80};
    long *pnum1{&numbers[6]};   // 7th element
    long *pnum2{&numbers[1]};   // 2nd element

    // difference
    std::ptrdiff_t difference{pnum1 - pnum2};   // 5
    // The difference variable will be set to the integer value 5 because the
    // difference between two pointers is again measured in terms of elements,
    // not in terms of bytes.

    // The size of pointer variable is platform specific - 4 or 8 bytes. The C++
    // language therefore prescribe that subtracting two pointers results in a
    // value of type std::ptrdiff_t.

    //--------------------------------------------
    // Dynamic Memory Allocation
    //--------------------------------------------
    // Dynamic memory allocation is allocating the memory you need to store the
    // data you’re working with at runtime, rather than having the amount of
    // memory predefined when the program is compiled. For example,
    // std::vector<>

    // Using `new` and `delete`
    double *pvalue5{new double{3.14}};   // Allocate memory
    delete pvalue5;                      // Release memory

    // If you don’t use delete and you store a different address in pvalue, it
    // will be impossible to free up the original memory because access to the
    // address will have been lost. The memory will be retained for use by your
    // program until the program ends. Of course, you can’t use it because you
    // no longer have the address. Note that the delete operator frees the
    // memory but does not change the pointer. After the previous statement has
    // executed, pvalue still contains the address of the memory that was
    // allocated, but the memory is now free and may be allocated immediately to
    // something else. A pointer that contains such a spurious address is
    // sometimes called a dangling pointer. Dereferencing a dangling pointer is
    // a sweet recipe for disaster, so you should get in the habit of always
    // resetting a pointer when you release the memory to which it points, like
    // this:
    pvalue5 = nullptr;   // Reset the pointer

    // NOTE: It is perfectly safe to apply delete on a pointer variable that
    // holds the value nullptr.

    //--------------------------------------------
    // Dynamic Allocation of Arrays
    //--------------------------------------------
    double *data1{new double[10]};   // Allocate 10 double values
    // Values are still garbage as nothing has been assignd to array elements.

    double *data2{new double[10]{}};   // All 10 values initialized to 0.0
    int *data3{new int[3]{1, 2, 3}};
    float *data4{new float[10]{
        .1f, .2f}};   // Only first 2 floats are initialized to 0.0f

    // But unlike regular arrays, you cannot have the compiler deduce the
    // array's dimensions.
    // ERROR
    // int *data5{new int[3]{1, 2, 3}};
    // for (auto e : data5) {
    //     std::cout << e << " ";
    // }

    // Release array memory
    delete[] data4;
    data4 = nullptr;   // RECOMMENDED to do that after delete.

    // Multi dimensional array
    size_t rows{3}, columns{3};
    // ERROR: auto carrots{new double[rows][columns]{}};
    // Expression must have a constant value.

    double(*carrots1)[3]{new double[rows][3]{}};
    auto carrots2{new double[rows][3]{}};   // much better

    // 2D array - Using 1D array syntax
    double **carrots3{new double *[rows] {}};
    for (size_t i = 0; i < rows; ++i)
        carrots3[i] = new double[columns]{};

    // Release 2D array memory
    for (size_t i = 0; i < rows; ++i)
        delete[] carrots3[i];   // free element's memory 1 by 1.
    delete[] carrots3;          // release the array itself.

    return 0;
}
