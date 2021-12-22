#include <iostream>
#include "../03_StructuresClassAndPointers/Student.h"
#include "../03_StructuresClassAndPointers/Course.h"
#include "../03_StructuresClassAndPointers/Grade.h"
#include "../03_StructuresClassAndPointers/StudentRecords.h"

void initialize();

StudentRecords SR;

int main(){
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    initialize();

    int id;

    std::cout << "Enter a student ID: ";
    std::cin >> id;

    SR.ReportCard(id);

    std::cout << "~~* Creating Functions Example Beginning *~~" << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/
}

void initialize(){
    SR.add_student(1, "George P. Burdell");
    SR.add_student(2, "Nancy Rhodes");

    SR.add_course(1, "Algebra", 5);
    SR.add_course(2, "Physics", 4);
    SR.add_course(3, "English", 3);
    SR.add_course(4, "Economics", 4);

    SR.add_grade(1, 1, 'B');
    SR.add_grade(1, 2, 'A');
    SR.add_grade(1, 3, 'C');
    SR.add_grade(2, 1, 'A');
    SR.add_grade(2, 2, 'A');
    SR.add_grade(2, 4, 'B');
}