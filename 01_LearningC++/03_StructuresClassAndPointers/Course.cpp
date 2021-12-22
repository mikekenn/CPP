//
// Created by Michael Kennedy on 2021-12-21.
//

#include "Course.h"

#include <utility>

#include <utility>
/// Overloaded constructor.
/// @param [in] the_id Course id number.
/// @param [in] the_name Course name.
/// @param [in] the_credits Course credits.
Course::Course(int the_id, std::string the_name, unsigned char the_credits)
:id(the_id), name(std::move(std::move(the_name))), credits(the_credits)
{

}

/// Returns Course ID.
int Course::get_id() const {
    return id;
}

/// Returns Course Name.
std::string Course::get_name() const {
    return name;
}

/// Returns the credits for the course.
int Course::get_credits() const {
    return credits;
}