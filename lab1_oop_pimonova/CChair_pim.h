#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Utils.h"
#include "CTeacher_pim.h"
//#include "CHeadOfDepartment_pim.h"

class CTeacher_pim;

class CChair_pim
{
	std::vector <std::shared_ptr<class CTeacher_pim>> teachers;

public:
	void addTeacher();
	void addHeadOfDepartment();
	void seeAllTeachers();
	void saveToFile();
	void loadFromFile();
	void deleteAllTeachers();

};