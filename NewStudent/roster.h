#pragma once
#include "Student.h"
#include <string>
#include <vector>

class Roster {
private:
	
	vector<Student*> classRosterArray;
	int counter = 0;
	int i = 0;

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
