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
    return numDaysToCompleteCourse[5];
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
    
    cout << left << setw(2) << studentId;
    cout << " \t " << left << setw(11) << "First Name: " << setw(5) << firstName;
    cout << " \t " << left << setw(10) << "Last Name: " << setw(8) << lastName;
    cout << " \t " << left << setw(6) << "Email: " << setw(22) << emailAddress;
    cout << " \t " << left << setw(3) << "Age: " << setw(2) << age;
    cout << " \t " << left << setw(15) << "Days in Course: " << setw(12) << numDaysToCompleteCourse; // conflicting data for Days in course 
    cout << " \t " << left << setw(15) << "Degree Program: " << setw(8) << degreeProgram << endl;
}
