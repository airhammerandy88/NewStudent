#include <iostream>
#include <string>
#include "Student.h"

using namespace std;





Student::Student()
{
}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram)// need completed
{
}

string Student::GetStudentId() const
{
    return string();
}

string Student::GetFirstName() const
{
    return firstName;
}

string Student::GetLastName() const
{
    return lastName;
}

string Student::GetEmailAddress() const
{
    return emailAddress;
}

int Student::GetAge() const
{
    return age;
}

DegreeProgram Student::GetDegreeProgram()
{
    return degreeProgram;
}

void Student::SetStudentID(string sId)
{
    studentId = sId;
}

void Student::SetFirstName(string fName)
{
    firstName = fName;

}

void Student::SetLastName(string lName)
{
    lastName = lastName;
}

void Student::SetEmailAddres(string eAddress)
{
    emailAddress = eAddress;
}

void Student::SetAge(int aGe)
{
    age = aGe;
}

void Student::Print() const 
{
    cout << "A1   " << "First Name:   " << firstName << "    " << endl;  //strange tab spacing
    cout << "Last name:   " << lastName << "   " << endl;
    cout << "Email:   " << emailAddress << "   " << endl;
    cout << "Age:   " << age << "    " << endl;
    cout << "daysInCourse:   " << GetNumDaysToCompleteCourse << "   " << endl;
    cout << "Degree Program:    " << degreeProgram << "   " << endl;
}
