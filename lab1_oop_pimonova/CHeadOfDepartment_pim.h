#pragma once
#include "CTeacher_pim.h"

class CHeadOfDepartment_pim : public CTeacher_pim
{
public:
	int officeNumber;
	int numOfSubordinates;

	friend class CChair_pim;

	CHeadOfDepartment_pim();

	void writeToConsole();
	void readFromConsole();
};

