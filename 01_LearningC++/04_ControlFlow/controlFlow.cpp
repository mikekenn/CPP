#include <iostream>
#include <vector>
#include "../03_StructuresClassAndPointers/Student.h"
#include "../03_StructuresClassAndPointers/Course.h"
#include "../03_StructuresClassAndPointers/Grade.h"

int main (){
    std::cout << "~~* If Statements Example Beginning *~~" << std::endl;
    // Declaration & Assignment of variables.
    auto a = 1023;
    auto flag = false;
    auto letter = 'd';

    if (a > 1000) {
        std::cout << "Warning: a is over 1000." << std::endl;
    }

    if (a % 2){
        std::cout << "a is odd" << std::endl;
    }
    else{
        std::cout << "a is even" << std::endl;
    }

    std::cout << "The letter " << letter << " is ";
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' &&
        letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U'){
        std::cout << "not ";
    }
    std::cout << "a vowel." << std::endl;

    if (flag){ // Short circuit for saying If (flag == true)
        std::cout << "The flag is true!" << std::endl;
    }

    std::cout << "~~* If Statements Classes Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* Switch Statements Example Beginning *~~" << std::endl;
    // Declaration of variables.
    float operand_1, operand_2, result;
    char operation;

    // Output & Intake.
    std::cout << "Enter Operand 1: " << std::endl;
    std::cin >> operand_1;
    std::cout << "Enter Operand 2: " << std::endl;
    std::cin >> operand_2;
    std::cout << "Choose Operation: + - * /" << std::endl;
    std::cin >> operation;

    switch (operation){
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
        default:
            result = operand_1 + operand_2;
            break;
    }

    std::cout << "The result is " << result << std::endl;

    std::cout << "~~* Switch Statements Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* While Loops Example Beginning *~~" << std::endl;
    // Declaration of vector of ints called numbers.
    std::vector<int> numbers = {12,25,31,47,58};

    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    std::cout << std::endl;

    auto i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    std::cout << std::endl;

    std::cout << "~~* While Loops Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* For Loops Example Beginning *~~" << std::endl;
    std::vector<int> numbersone = {12,25,31,47,58};
    auto average = 0.0f;

    for (int i : numbersone)
        average += i;
    average /= numbersone.size();
    std::cout << "Average: " << average << std::endl;

    average = 0.0f;
    for (auto x : numbersone)
        average += x;
    average /= numbersone.size();
    std::cout << "Average: " << average << std::endl;

    std::cout << "~~* For Loops Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* Calculate a GPA Example Beginning *~~" << std::endl;

    std::vector<Student> students = {Student(1,"George P. Burdell"),
                                     Student(2,"Nancy Rhodes")};

    std::vector<Course> courses = {Course(1,"Algebra",5),Course(2,"Physics",4),
                                   Course(3,"English",3),Course(4,"Economics",4)};

    std::vector<Grade> grades = {Grade(1,1,'B'),Grade(1,2,'A'),Grade(1,3,'C'),
                                 Grade(2,1,'A'),Grade(2,2,'A'),Grade(2,4,'B')};

    auto GPA = 0.0f;
    int id;

    std::cout << "Enter a student ID: ";
    std::cin >> id;

    auto points = 0.0f, credits = 0.0f;
    for (Grade& grd : grades)
        if (grd.get_student_id() == id){
            float num_grd;          // float for the numeric grade
            switch (grd.get_grade()){
                case 'A': num_grd = 4.0f;
                    break;
                case 'B': num_grd = 3.0f;
                    break;
                case 'C': num_grd = 2.0f;
                    break;
                case 'D': num_grd = 1.0f;
                    break;
                default:  num_grd = 0.0f;
                    break;
            };
            // calculate total credits and points
            auto j=0;
            while (j < courses.size()  &&  courses[j].get_id() != grd.get_course_id())
                j++;
            credits += courses[j].get_credits();
            points += num_grd * courses[j].get_credits();
        }
    GPA = points / credits;

    std::string student_str;
    student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    std::cout << "~~* Calculate a GPA Example End *~~" << std::endl << std::endl;
}