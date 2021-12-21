#include <iostream>

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
    auto c = 3.14f;
    auto d = 3.14;
    auto f = 'd';


    // Printing out of variables.
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a+b = " << a+b << std::endl;
    std::cout << "b-a = " << b-a << std::endl;

    //gives a single character to identify the variable type.
        // i = int.
        // b = boolean.
        // f = float.
        // d = double.
        // c = character.
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(my_flag).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;

    // Unsigned int is a variable allowing for positive numbers from 0-255
    unsigned int positive;

    // Assigning the value of b(5) - a(7) to positive.
    positive = b - a;

    // Printing the value of positive.
    // Result is the 2's compliment value of -2 in binary. 4294967294 = (2^32)-2.
    std::cout << "b-a (unsigned) = " << positive << std::endl;
    return (0);
}