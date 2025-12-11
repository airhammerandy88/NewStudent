#pragma once
#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToCompleteCourse[5];


public:

	Student();
	Student(string studentId, string firstName, string lastName, string emailAddress, int age, DegreeProgram degreeProgram); //add degree

	string GetStudentId() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetNumDaysToCompleteCourse[5]; //need research
	enum GetDegreeProgram { SECURITY, NETWORK, SOFTWARE }; // need research

	void SetStudentID(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddres(string emailAddress);
	void SetAge(int age);
	//void SetNumDaysToCompleteCourse[5];


	void PrintStudentData(string firstName, string lastName, string emailAddress, DegreeProgram degreeProgram);//degree







};