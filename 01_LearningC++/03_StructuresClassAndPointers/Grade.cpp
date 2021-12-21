//
// Created by Michael Kennedy on 2021-12-21.
//

#include "Grade.h"
/// Overloaded Constructor
/// \param [in] sid Enter a Students ID.
/// \param [in] cid Enter a Course ID.
/// \param [in] grd Enter a Grade.
Grade::Grade(int sid, int cid, char grd)
:student_id(sid), course_id(cid), grade(grd)
{}

/// Returns a Student ID.
/// \return [out] Student ID.
int Grade::get_student_id() const
{
    return student_id;
}

/// Returns a Course ID.
/// \return [out] Course ID.
int Grade::get_course_id() const
{
    return course_id;
}

/// Returns a Students Grade.
/// \return [out] Students Grade.
char Grade::get_grade() const
{
    return  grade;
}
