#pragma once

#include <string>
#include <iostream>
#include <fstream>

#include "CHeadOfDepartment_pim.h"
#include "Utils.h"

using namespace std;


CHeadOfDepartment_pim::CHeadOfDepartment_pim()
{
	officeNumber = 0;
	numOfSubordinates = 0;
}

void CHeadOfDepartment_pim::writeToConsole()
{
    CTeacher_pim::writeToConsole();
    cout << "\nOffice number: " << officeNumber << "\nNumber of subordinates: " << numOfSubordinates << std::endl;
}

void CHeadOfDepartment_pim::readFromConsole()
{
    CTeacher_pim::readFromConsole();

    std::cout << "Office number:\n";
    officeNumber = getInRange(0, 3000);
    std::cout << "Number of subordinates:\n";
    numOfSubordinates = getInRange(0, 100);
}