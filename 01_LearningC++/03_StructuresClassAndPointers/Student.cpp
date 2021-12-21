//
// Created by Michael Kennedy on 2021-12-21.
//

#include "Student.h"
/// Overloaded constructor.
/// \param [in] the_id Enter Students ID.
/// \param [in] the_name Enter Students Name.
Student::Student(int the_id, std::string the_name)
:id(the_id), name(the_name)
{}

/// Returns a Students ID.
/// \return [out] Returns Student ID.
int Student::get_id() const {
    return id;
}

/// Returns a Students Name.
/// \return [out] Returns Student Name.
std::string Student::get_name() const {
    return name;
}
