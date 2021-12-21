//
// Created by Michael Kennedy on 2021-12-21.
//

#ifndef CPP_COURSE_H
#define CPP_COURSE_H

#include <string>

class Course {
private:
    int id;
    std::string name;
    unsigned char credits;
public:
    Course(int, std::string, unsigned char);
    int get_id() const;
    std::string get_name() const;
    int get_credits() const;
};


#endif //CPP_COURSE_H
