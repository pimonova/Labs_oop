#include "CTeacher_pim.h"
#include "Utils.h"

using namespace std;

int CTeacher_pim::newTeacherID = 0;

CTeacher_pim::CTeacher_pim()
{
    teacherID = ++newTeacherID;
    teacherName = "ivan";
    teacherSurname = "Ivanov";
    birthYear = 1990;
    chairName = "Mathemathics";
}

int CTeacher_pim::getTeacherID() const
{
	return teacherID;
}

std::istream& operator >> (std::istream& in, CTeacher_pim& t)
{
    std::cout << "Add teacher data: name, surname, year of Birth, chair\n";
    std::cout << "Name:\n";
    in >> std::ws;
    getline(in, t.teacherName);
    std::cout << "Surname:\n";
    in >> std::ws;
    getline(in, t.teacherSurname);
    std::cout << "Year of Birth:\n";
    t.birthYear = getInRange(1930, 2000);
    std::cout << "Chair:\n";
    in >> std::ws;
    getline(in, t.chairName);
    return in;
}

std::ostream& operator << (std::ostream& out, const CTeacher_pim& t)
{
    out << "\nTeacher:\n";
    out << "ID: " << t.teacherID << "\nName: " << t.teacherName
        << "\nSurname: " << t.teacherSurname << "\nYear of Birth: " << t.birthYear << "\nChair: " << t.chairName << std::endl;
    return out;
}

std::ofstream& operator << (std::ofstream& out, const CTeacher_pim& t)
{
    out << t.teacherID << std::endl << t.teacherName << std::endl << t.teacherSurname << std::endl << t.birthYear << std::endl << t.chairName;
    return out;
}

std::ifstream& operator >>(std::ifstream& in, CTeacher_pim& t)
{
    in >> ws;
    in >> t.teacherID;
    in.ignore(10000, '\n');
    getline(in, t.teacherName);
    getline(in, t.teacherSurname);
    in >> t.birthYear;
    in.ignore(10000, '\n');
    getline(in, t.chairName);

    CTeacher_pim::newTeacherID = t.teacherID;

    return in;
}