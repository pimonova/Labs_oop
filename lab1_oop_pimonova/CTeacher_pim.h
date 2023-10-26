#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include "CChair_pim.h"

class CTeacher_pim
{
protected:
	int teacherID;
	static int newTeacherID;

public:
	std::string teacherName;
	std::string teacherSurname;
	int birthYear;
	std::string chairName;

	CTeacher_pim();

	virtual void writeToConsole();
	virtual void readFromConsole();
	void writeToFile(std::ofstream& fout);
	void readFromFile(std::ifstream& fin);

	virtual int getTeacherID() const;
};

