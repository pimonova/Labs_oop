#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include "CChair_pim.h"

class CTeacher_pim
{
	int teacherID;
	static int newTeacherID;

public:
	std::string teacherName;
	std::string teacherSurname;
	int birthYear;
	std::string chairName;

	friend std::ostream& operator << (std::ostream& out, const CTeacher_pim& t);
	friend std::istream& operator >> (std::istream& in, CTeacher_pim& t);
	friend std::ofstream& operator << (std::ofstream& out, const CTeacher_pim& t);
	friend std::ifstream& operator >> (std::ifstream& in, CTeacher_pim& t);
	friend class CChair_pim;

	CTeacher_pim();

	int getTeacherID() const;
};

