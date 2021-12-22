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
    [[nodiscard]] int get_id() const;
    [[nodiscard]] std::string get_name() const;
};

#endif //CPP_STUDENT_H
