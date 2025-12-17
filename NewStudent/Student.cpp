#include <iostream>
#include <string>
#include <iomanip>
#include "Student.h"

using namespace std;





Student::Student()
{
}

Student::Student(string sId, string fName, string lName, string eAddress, int s_age, int daysInCourse[3], DegreeProgram dProgram)// need completed
{
    this->studentId = sId;
    this->firstName = fName;
    this->lastName = lName;
    this->emailAddress = eAddress;
    this->age = s_age;
    this->numDaysToCompleteCourse[3] = daysInCourse[3];
    this->degreeProgram = dProgram;
}

string Student::GetStudentId() const
{
    return studentId;
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

int Student::GetNumDaysToCompleteCourse() 
{
    return numDaysToCompleteCourse[3];
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
    
    cout << studentId;
    cout << "          " << " First Name: " << firstName;
    cout << " Last name: " << lastName;
    cout << "          " << " Email: " << emailAddress;
    cout << "          " << " Age: " << age;
    cout << "          " << " Days in Course: " << " {need to calculate} ";
    cout << "          " << " Degree Program: " << degreeProgram << endl;
}
