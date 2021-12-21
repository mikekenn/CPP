//
// Created by Michael Kennedy on 2021-12-21.
//

#ifndef CPP_GRADE_H
#define CPP_GRADE_H

class Grade {
private:
    int student_id;
    int course_id;
    char grade;
public:
    Grade(int, int, char);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;
};

#endif //CPP_GRADE_H
