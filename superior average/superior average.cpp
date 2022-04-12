#include <iostream>
#include "Student.h"

int Student::counter{ 0 };
double Student::avrage{ 0 };

int main()
{

    Student s1;
    Student s2;
    Student s3;

    s1.setName();
    s1.setLastname();
    s1.setScore();
   
    s2.setName();
    s2.setLastname();
    s2.setScore();

    s3.setName();
    s3.setLastname();
    s3.setScore();

    s1.getName();
    s1.getLastname();
    s1.getScore();
    s1.getId();

    s2.getName();
    s2.getLastname();
    s2.getScore();
    s2.getId();

    s3.getName();
    s3.getLastname();
    s3.getScore();
    s3.getId();

    Student s4{ "Mohammad","Aghaee",16.75 };
    Student s5{ "Ali","Alimoradi",10 };
    Student s6{ "Saman","Saraee",17 };

    s6.setScore();

    Student::getNumberOfStudent();
    Student::setAvrage();
}