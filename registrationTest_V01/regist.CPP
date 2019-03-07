// regist.CPP - Registration class implementation.

#include "regist.h"

Registration::Registration()
{
    studentId = 0;
    semester = 0;
    count = 0;
}

unsigned Registration::GetCredits() const
{
    unsigned sum = 0;

    for(unsigned i = 0; i < count; i++)
    {
        sum += courses[i].GetCredits();
    }

    return sum;
}

istream & operator >>( istream & input, Registration & R )
{
    input >> R.studentId >> R.semester >> R.count;

    for(unsigned i = 0; i < R.count; i++)
    {
        input >> R.courses[i];
    }

    return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
    os << "Student ID: " << R.studentId << endl
    << "Semester:   " << R.semester << endl;

    for(unsigned i = 0; i < R.count; i++)
    {
        os << R.courses[i] << endl;
    }

    return os;
}
