//
// Created by Michael Kennedy on 2021-12-21.
//

#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H

#include <string>

class Student{
private:
    int id;
    std::string name;
public:
    Student(int, std::string);
    int get_id() const;
    std::string get_name() const;
};

#endif //CPP_STUDENT_H
