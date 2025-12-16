#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "degree.h"


using namespace std;

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age = 0;
	//int dayInCourse1;
	//int dayInCourse2;
	//int dayInCourse3;
	int numDaysToCompleteCourse[5];
	DegreeProgram degreeProgram = NETWORK;

	


public:
	
	Student();
	Student(string sId, string fName, string lName, string eAddress, int s_age, int daysInCourse[3], DegreeProgram dProgram);//string studentId, string firstName, string lastName, string emailAddress, int age, int dayInCourse[], DegreeProgram degreeProgram);

	string GetStudentId() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetNumDaysToCompleteCourse();
	DegreeProgram GetDegreeProgram() ; 

	void SetStudentID(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddres(string emailAddress);
	void SetAge(int age);
	
	//void SetNumDaysToCompleteCourse[5]();
	


	void Print() const;






};