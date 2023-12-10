#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

Student::Student() // default constructor
{
  id = 0;
}

Student::Student(int newid) // constructor w initialized variables
{
  id = newid;
}

Student::~Student() // destructor
{
}

