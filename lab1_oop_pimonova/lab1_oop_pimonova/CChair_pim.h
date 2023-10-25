#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <list>

#include "Utils.h"
#include "CTeacher_pim.h"

class CChair_pim
{
	std::list <CTeacher_pim*> teachers;

public:
	void addTeacher();
	void seeAllTeachers();
	void saveToFile();
	void loadFromFile();
	void deleteAllTeachers();
};