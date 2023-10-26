#include <iostream>
#include <fstream>
#include <string>

#include "Utils.h"
#include "CTeacher_pim.h"
#include "CChair_pim.h"
#include "CHeadOfDepartment_pim.h"

using namespace std;

//меню
void showMenu()
{
    cout << "\nWelcome to the main menu \nUse numbers to navigate:\n";
    cout << "\n";
    cout << "Exit: 0 \nAdd teacher: 1 \nAdd head of department: 2 \nSee all teachers: 3 \nSave to file: 4 \nLoad from file: 5 \nDelete teachers: 6";
}

int main()
{
    CChair_pim teachersList;
    while (true)
    {
        showMenu();

        cout << "\nEnter an operation: ";
        int operation;
        operation = getInRange(0, 6);

        switch (operation)
        {
        case 0:
        {
            cout << "\nGoodbye!" << endl;
            return 0;        
        }
        case 1:
        {
            //cout << "Add teacher\n" << endl;
            teachersList.addTeacher();
            break;
        }
        case 2:
        {
            //cout << "Add head of department\n" << endl;
            teachersList.addHeadOfDepartment();
            break;
        }
        case 3:
        {
            //cout << "See all teachers\n" << endl;
            teachersList.seeAllTeachers();
            break;
        }
        case 4:
        {
            cout << "Save to file\n" << endl;
            //teachersList.saveToFile();
            break;
        }
        case 5:
        {
            //teachersList.deleteAllTeachers();
            cout << "Download from file\n" << endl;
            //teachersList.loadFromFile();
            break;
        }
        case 6:
        {
            cout << "Delete teachers\n" << endl;
            //teachersList.deleteAllTeachers();
            break;
        }
        default:
        {
            cout << "\nInput error";
        }
        }
    }
    return 0;
}

