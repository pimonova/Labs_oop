#include "CChair_pim.h"
#include "CHeadOfDepartment_pim.h"

using namespace std;

void CChair_pim::addTeacher()
{
    shared_ptr<CTeacher_pim> t = make_shared<CTeacher_pim>(); // https://habr.com/ru/companies/piter/articles/706866/
    t->readFromConsole();
    teachers.push_back(t);
}

void CChair_pim::addHeadOfDepartment()
{
    shared_ptr<CHeadOfDepartment_pim> t = make_shared<CHeadOfDepartment_pim>();
    t->readFromConsole();
    teachers.push_back(t);
}

void CChair_pim::seeAllTeachers()
{
	if (teachers.size() != 0)
	{
		for (const auto teacher : teachers) teacher->writeToConsole();
	}
	else
		cout << "\nThere are no teachers!" << endl;
}

void CChair_pim::saveToFile()
{
    cout << "\nEnter the file name: ";
    string oFileName;
    cin >> ws;
    getline(cin, oFileName);
    oFileName = oFileName + ".txt";
    ofstream fout;
    fout.open(oFileName);
    if (!fout.is_open())
        cerr << "\nThe file cannot be opened\n";
    else
    {
        if (teachers.size() != 0)
        {
            for (const auto teacher : teachers) teacher->writeToFile(fout);
        }

        fout.close();
        cout << "\nData saved!" << endl;
    }
}

void CChair_pim::loadFromFile()
{
    cout << "\nEnter the file name (.txt): ";
    string iFileName;
    cin >> ws;
    getline(cin, iFileName);
    iFileName = iFileName + ".txt";
    ifstream fin;
    fin.open(iFileName);
    if (!fin.is_open())
        cerr << "\nThe file cannot be opened\n";
    else
    {
        while (fin.peek()!=EOF)
        {
            shared_ptr<CTeacher_pim> t = make_shared<CTeacher_pim>();
            t->readFromFile(fin);
            teachers.push_back(t);
        }

        cout << "\nData uploaded!" << endl;

        fin.close();
    }
}

void CChair_pim::deleteAllTeachers()
{
    teachers.clear();
    CTeacher_pim::newTeacherID = 0;
    cout << "\nData deleted!";
}