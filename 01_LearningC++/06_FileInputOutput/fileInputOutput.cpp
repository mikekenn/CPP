#include <iostream>
#include <string>
#include <vector>
#include "../03_StructuresClassAndPointers/Student.h"
#include "../03_StructuresClassAndPointers/Course.h"
#include "../03_StructuresClassAndPointers/Grade.h"
#include "../03_StructuresClassAndPointers/StudentRecords.h"

void initialize();
void initialize(std::ifstream&);

StudentRecords SR;
//int id;
//std::ifstream inFile;
//std::ofstream outFile;

int main(){
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* Opening a text file for reading Example Beginning *~~" << std::endl;

    // Variable declaration.
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail()){
        std::cout << std::endl << "File not found!" << std::endl;
    }
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", ";
            getline(inFile,str);
            number = stoi(str);
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            std::cout << letter << std::endl;
        }
        inFile.close();
    }

    std::cout << "~~* Opening a text file for reading Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* Opening a text file for reading Example Beginning *~~" << std::endl;

    // Variable declaration.
    std::ofstream outFile;
    auto a = 4.333f, b = 5.302f;

    outFile.open("calculations.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }

    std::cout << "~~* Opening a text file for reading Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    std::cout << "~~* Upgrade to work with files Example Beginning *~~" << std::endl;
    initialize(inFile);       // initialize();
    SR.report_file(outFile);  // SR.report_card(1,cout);
    std::cout << "~~* Upgrade to work with files Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    //std::cout << "~~* Example Beginning *~~" << std::endl;
    //std::cout << "~~* Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/

    //std::cout << "~~* Example Beginning *~~" << std::endl;
    //std::cout << "~~* Example End *~~" << std::endl << std::endl;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`*/
}

void initialize(std::ifstream& inFile){
    std::string str, name;
    int sid, cid;
    unsigned char credits;
    char grade;
    int count = 0;

    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << std::endl << "File students.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, name);
            SR.add_student(sid, name);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " students" << std::endl;
    }

    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << std::endl << "File courses.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, name);
            getline(inFile, str);
            credits = stoi(str);
            SR.add_course(cid, name, credits);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " courses" << std::endl;
    }

    count = 0;
    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << std::endl << "File grades.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, str);
            grade = str[0];
            SR.add_grade(sid, cid, grade);
            count++;
        }
        inFile.close();
        std::cout << "Found " << count << " grades" << std::endl;
    }
}

void initialize(){
    SR.add_student(1, "George P. Burdell");
    SR.add_student(2,"Nancy Rhodes");

    SR.add_course(1, "Algebra", 5);
    SR.add_course(2, "Physics", 4);
    SR.add_course(3, "English", 3);
    SR.add_course(4,"Economics",4);

    SR.add_grade(1, 1, 'B');
    SR.add_grade(1, 2, 'A');
    SR.add_grade(1, 3, 'C');
    SR.add_grade(2, 1, 'A');
    SR.add_grade(2, 2, 'A');
    SR.add_grade(2, 4, 'B');
}