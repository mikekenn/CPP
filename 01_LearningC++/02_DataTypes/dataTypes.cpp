#include <iostream>
#include <cstdint>
#include <string>

//Preprocessor Directive.
// Using define is generally considered bad practice. It is better to make the variables const qualified.
#define CAPACITY 5000
#define DEBUG

int main(){
    // Creation & assignment of auto variables.
        // int.
        // int.
        // boolean.
        // float.
        // double.
        // string.
    auto a = 7;
    auto b = 5;
    auto my_flag = false;


    // Printing out of variables.
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a+b = " << a+b << std::endl;
    std::cout << "b-a = " << b-a << std::endl;

    //gives a single character to identify the variable type.
        // i = int.
        // b = boolean.
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(my_flag).name() << std::endl;

    // Unsigned int is a variable allowing for positive numbers from 0-255
    unsigned int positive;

    // Assigning the value of b(5) - a(7) to positive.
    positive = b - a;

    // Printing the value of positive.
    // Result is the 2's compliment value of -2 in binary. 4294967294 = (2^32)-2.
    std::cout << "b-a (unsigned) = " << positive << std::endl;

    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // shorthand for large = large + small
    std::cout << "The large integer is " << large << std::endl;

    // Const int cannot be changed.
    const int LENGTH1 = 25;

    //Initialization of an array to size LENGTH1
    char array_str1[LENGTH1] = "Hey guys! ";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    std::cout << "~~* Type Casting Example Beginning *~~" << std::endl;
    float flt = -7.44f;
    int32_t sgn;
    uint32_t unsgn;
    sgn = flt;
    unsgn = sgn;
    int fahrenheit = 100;
    int celsius;
    float weight = 10.99;
    celsius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << "float : " << flt << std::endl;
    std::cout << "int32 : " << sgn << std::endl;
    std::cout << "uint32: " << unsgn << std::endl;

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    std::cout << "~~~~* Type Casting Example Ending *~~~" << std::endl;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    return (0);
}