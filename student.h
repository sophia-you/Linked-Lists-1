#ifndef	STUDENT_H
#define	STUDENT_H
#include <iostream>
#include <cstring>
class Student
{
 public:
  Student(); // default constructor
  Student(int); // constructor w/ initialized values
  ~Student(); // destructor
  int id;
};
#endif
