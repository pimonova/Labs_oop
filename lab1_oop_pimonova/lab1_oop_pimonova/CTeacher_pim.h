#pragma once

#include <fstream>
#include <iostream>
#include <string>

class CTeacher_pim
{
	int teacherID;

public:
	std::string teacherName;
	std::string teacherSurname;
	int birthYear;
	std::string chairName;

	static int newTeacherID;

	friend std::ostream& operator << (std::ostream& out, const CTeacher_pim& t);
	friend std::istream& operator >> (std::istream& in, CTeacher_pim& t);
	friend std::ofstream& operator << (std::ofstream& out, const CTeacher_pim& t);
	friend std::ifstream& operator >> (std::ifstream& in, CTeacher_pim& t);


	CTeacher_pim();

	int getTeacherID() const;
};

