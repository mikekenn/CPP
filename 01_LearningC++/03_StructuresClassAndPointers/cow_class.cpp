//
// Created by Michael Kennedy on 2021-12-21.
//

#include "cow_class.h"

cow_class::cow_class(std::string name_i, int age_i, unsigned char purpose_i)
:name(std::move(name_i)), age(age_i), purpose(purpose_i)
{
}

std::string cow_class::get_name(){
    return name;
}

int cow_class::get_age() const {
    return age;
}

unsigned char cow_class::get_purpose() const {
    return purpose;
}

void cow_class::set_age(int new_age){
    age = new_age;
}
