//
// Created by Michael Kennedy on 2021-12-21.
//

#ifndef CPP_COW_CLASS_H
#define CPP_COW_CLASS_H

#include <string>

class cow_class{
private:
    std::string name;
    int age;
    unsigned char purpose;
public:
    cow_class(std::string, int, unsigned char);
    std::string get_name();
    [[nodiscard]] int get_age() const;
    [[nodiscard]] unsigned char get_purpose() const ;
    void set_age(int);
};

#endif //CPP_COW_CLASS_H
