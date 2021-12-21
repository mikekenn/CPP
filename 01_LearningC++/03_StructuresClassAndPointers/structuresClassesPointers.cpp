#include <iostream>
#include <vector>
#include <string>
#include "cow_struct.h"
#include "cow_class.h"
#include "Student.h"
#include "Course.h"
#include "Grade.h"

enum cow_purpose { dairy, meat, hide, pet };

int main(){
    std::cout << "~~* Structures Example Beginning *~~" << std::endl;
    // Declaration of a cow object.
    cow_struct cow_object_one;

    // Assignment of cow object member variables.
    cow_object_one.age = 5;
    cow_object_one.name = "Betsy";
    cow_object_one.purpose = dairy;

    // Printing of cow object member variables.
    std::cout << cow_object_one.name << " is a type-" << (int)cow_object_one.purpose << " cow." << std::endl;
    std::cout << cow_object_one.name << " is " << cow_object_one.age << " years old." << std::endl;
    std::cout << "~~* Structures Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    std::cout << "~~* Classes Example Beginning *~~" << std::endl;
    // Declaration of a cow object.
    cow_class cow_object_two("Hildy",7,pet);

    // Printing of cow object member variables.
    std::cout << cow_object_two.get_name() << " is a type-" << (int)cow_object_two.get_purpose() << " cow." << std::endl;
    std::cout << cow_object_two.get_name() << " is " << cow_object_two.get_age() << " years old." << std::endl;
    std::cout << "~~* Classes Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    std::cout << "~~* Pointers Example Beginning *~~" << std::endl;
    // Declaration of variable.
    int a = 37;

    // Declaration of pointer.
    int *ptr;

    // Assignment of variables address to pointer.
    ptr = &a;

    // Printing of variable & pointer values.
    std::cout << "The content of a is:            " << a << std::endl;
    std::cout << "ptr is pointing to address:     " << ptr << std::endl;
    std::cout << "The address of a is:            " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have: " << *ptr << std::endl;
    std::cout << "The address of ptr is:          " << &ptr << std::endl;
    std::cout << std::endl;

    //Declaration of a pointer.
    cow_class *cow_pointer;

    // Assignment of a newly initialized object to pointer.
    // ALWAYS REMEMBER TO DELETE OBJECT!!
    cow_pointer = new cow_class("Gertie",3,hide);
    std::cout << cow_pointer->get_name() << " is a type-" << (int)cow_pointer->get_purpose() << " cow." << std::endl;
    std::cout << cow_pointer->get_name() << " is " << cow_pointer->get_age() << " years old." << std::endl;

    delete cow_pointer;

    std::cout << "~~* Pointers Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    std::cout << "~~* Vectors Example Beginning *~~" << std::endl;
    // Declaration of vector of ints.
    std::vector<int> primes;

    // Adding ints to primes vector.
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);

    // Printing size of vector.
    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    // Printing value at index 2.
    std::cout << "The element at index 2 is " << primes[2] << std::endl;

    // Assigning new value to third place in vector.
    primes[2] = 13;

    // Printing new value at third place in vector.
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    std::cout << std::endl;

    // Declaration of vector of cows called cattle.
    std::vector<cow_class> cattle;

    // Adding cows to cattle vector.
    cattle.push_back(cow_class("Betty", 6, meat));
    cattle.push_back(cow_class("Libby", 4, hide));
    cattle.push_back(cow_class("Trudy", 5, pet));
    cattle.push_back(cow_class("Betsy", 2, dairy));

    // Printing.
    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;

    std::cout << "~~* Vectors Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    std::cout << "~~* Create some Classes Example Beginning *~~" << std::endl;
    Student my_student(1,"Hilda Jones");
    Course my_course(7,"Physics 101",3);
    Grade my_grade(1,7,'B');

    std::cout << "Student: " << my_student.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;
    std::cout << "~~* Create some Classes Example End *~~" << std::endl << std::endl;
    
    return (0);
}









