#ifndef REGIST_H
#define REGIST_H


#include <iostream>
#include "course.h"

using namespace std;

const unsigned MaxCourses = 10;


	/**
	 * @class Registration
	 * @brief Holds information about a student's registration at university.
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
	 * @todo
	 *
	 * @bug None known
	 */

class Registration {
public:

   /**
    * @brief  Default constructor. Sets values to 0.
    *
    * @param  nil
    * @return Registration
    */
    Registration();

    /**
    * @brief  Accessor method for credits.
    *
    * @param  nil
    * @return unsigned const
    */
    unsigned GetCredits() const;

    /**
    * @brief  Accessor method for count, sums all credits in array of courses.
    *
    *
    * @param  nil
    * @return unsigned const
    */
    unsigned GetCount() const;

    /**
    * @brief  Overloaded operator for file output.
    *
    *
    * @param  os: ostream pointer
    * @param  R: registration object
    * @return friend ostream pointer
    */
    friend ostream & operator <<( ostream & os, const Registration & R);


    /**
    * @brief  Overloaded operator for file input.
    *
    *
    * @param  input: istream pointer
    * @param  R: registration object
    * @return friend istream pointer
    */
    friend istream & operator >>( istream & input, Registration & R );

private:
    /// student ID number
    long studentId;

    /// semester year, number
    unsigned semester;

    /// number of courses
    unsigned count;

    /// array of courses
    Course courses[MaxCourses];
};

inline unsigned Registration::GetCount() const
{
  return count;
}

#endif

