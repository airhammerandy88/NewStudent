#pragma once
#include "Student.h"

class Roster {
private:
	Student* classRosterArray[5]; //hold data in "studentData table"
	//int Student::GetStudentId;
	static int nextIndex;

public:

	Roster();
	~Roster();

	void parse(string);

	//void add(string studentId, string lastName, string emailAddress, int age, int daysInCourse1, int daysIncourse2, int daysInCourse3);

	void add(string studentId, string lastName, string emailAddress, int age, int daysInCourse1, int daysIncourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(string studentId);

	void printAll();

	void printAverageDaysInCourse(string studentId);

	void printInvaildEmails();

	void printBydegreeProgram(DegreeProgram degreProgram);


};
