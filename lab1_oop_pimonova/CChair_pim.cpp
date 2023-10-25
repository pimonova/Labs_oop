#include "CChair_pim.h"

using namespace std;

CChair_pim::~CChair_pim()
{
    deleteAllTeachers();
};

void CChair_pim::addTeacher()
{
    CTeacher_pim* t = new CTeacher_pim();
    cin >> *t;
    teachers.push_back(t);
}

void CChair_pim::seeAllTeachers()
{
	if (teachers.size() != 0)
	{
		for (const auto* teacher : teachers) cout << *teacher << endl;
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
            for (const auto* teacher : teachers) fout << *teacher << endl;
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
            CTeacher_pim* t = new CTeacher_pim();
            fin >> *t;
            teachers.push_back(t);
        }

        cout << "\nData uploaded!" << endl;

        fin.close();
    }
}

void CChair_pim::deleteAllTeachers()
{
    for (auto* teacher : teachers) delete teacher;
    teachers.clear();
    CTeacher_pim::newTeacherID = 0;
    cout << "\nData deleted!";
}