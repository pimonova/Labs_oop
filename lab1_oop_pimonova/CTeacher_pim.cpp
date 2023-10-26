#include "CTeacher_pim.h"
#include "Utils.h"

using namespace std;

int CTeacher_pim::newTeacherID = 0;

CTeacher_pim::CTeacher_pim()
{
    teacherID = ++newTeacherID;
    teacherName = "Ivan";
    teacherSurname = "Ivanov";
    birthYear = 1990;
    chairName = "Mathemathics";
}

void CTeacher_pim::writeToConsole()
{
    cout << "\nTeacher:\n";
    cout << "ID: " << teacherID << "\nName: " << teacherName
        << "\nSurname: " << teacherSurname << "\nYear of Birth: " << birthYear << "\nDepartment: " << chairName << std::endl;
}

void CTeacher_pim::readFromConsole()
{
    cout << "Name:\n";
    cin >> std::ws;
    getline(cin, teacherName);
    cout << "Surname:\n";
    cin >> std::ws;
    getline(cin, teacherSurname);
    cout << "Year of Birth:\n";
    birthYear = getInRange(1930, 2000);
    cout << "Department:\n";
    cin >> std::ws;
    getline(cin, chairName);
}

void CTeacher_pim::writeToFile(std::ofstream& fout)
{
    fout << teacherID << std::endl << teacherName << std::endl << teacherSurname << std::endl << birthYear << std::endl << chairName;
}

void CTeacher_pim::readFromFile(std::ifstream& fin)
{
    fin >> ws;
    fin >> teacherID;
    fin.ignore(10000, '\n');
    getline(fin, teacherName);
    getline(fin, teacherSurname);
    fin >> birthYear;
    fin.ignore(10000, '\n');
    getline(fin, chairName);

    CTeacher_pim::newTeacherID = teacherID;
}

int CTeacher_pim::getTeacherID() const
{
	return teacherID;
}