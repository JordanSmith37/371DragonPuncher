#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string.h>  // C string library

using namespace std;

const unsigned CourseNameSize = 10;

	/**
	 * @class Course
	 * @brief Holds information about courses for student res.
	 *
	 * @author KRI
	 * @version 01
     *
     * @author smr
	 * @version 02
     *
	 * @author Jordan Smith
	 * @version 03
	 * @date 06/03/2019 Jordan Smith, further expand on design.
	 *
	 * @todo update all comments and indentation.
	 *
	 * @bug None known
	 */
class Course {
public:

    /**
    * @brief  Default constructor.
    *
    * @param  nil
    * @return Course
    */
    Course();

    /**
    * @brief  Construct a course from a name, section letter and number of credits.
    *
    * @param  nam: const: char *
    * @param  sect: char
    * @param  cred: unsigned
    * @return Registration
    */
    Course( const char * nam, char sect, unsigned cred );
  // Construct a course from a name, section letter,
  // and number of credits.

   /**
    * @brief  Accessor method for credits.
    *
    * @param  nil
    * @return const: unsigned
    */
    unsigned GetCredits() const;

    /**
    * @brief  Mutator method for cred.
    *
    * @param  cred: unsigned
    * @return void
    */
    void SetCredits( unsigned cred );

    /**
    * @brief  Overload operator << for file output.
    *
    * @param  os: ostream &
    * @param  C: const: Course &
    * @return ostream &
    */
    friend ostream & operator <<( ostream & os, const Course & C );

    /**
    * @brief  Overload operator >> for file input.
    *
    * @param  input: istream &
    * @param  C: Course &
    * @return istream &
    */
    friend istream & operator >>( istream & input, Course & C );

private:
    /// course name, C style string. not a C++ string object
    char name[CourseNameSize];

    /// section (letter) can be enrolment mode
    char section;

    /// number of credits
    int  credits;
};


inline unsigned Course::GetCredits() const
{
    return credits;
}

inline void Course::SetCredits( unsigned cred )
{
    credits = cred;
}

#endif
