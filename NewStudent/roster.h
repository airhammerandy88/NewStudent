#pragma once
#include "Student.h"
#include <string>

class Roster {
private:
	
	Student classRosterArray[5];
	static int nextIndex;// use in printall
	

public:
	
	

	Roster();
	~Roster();

	void parse(string);

	void add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysIncourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(string studentId);

	void printAll();

	void printAverageDaysInCourse(string studentId);

	void printInvaildEmails();

	void printBydegreeProgram(DegreeProgram degreProgram);


};
