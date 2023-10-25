#include <iostream>
#include <fstream>
#include <string>

#include "Utils.h"
#include "CTeacher_pim.h"
#include "CChair_pim.h"

using namespace std;

//меню
void showMenu()
{
    cout << "\nWelcome to the main menu \nUse numbers to navigate:\n";
    cout << "\n";
    cout << "Exit: 0 \nAdd teacher: 1 \nSee all teachers: 2 \nSave to file: 3 \nDownload from file: 4 \nDelete teachers: 5";
}

int main()
{
    CChair_pim teachersList;
    while (true)
    {
        showMenu();

        cout << "\nEnter an operation: ";
        uint32_t operation;
        operation = getInRange(0, 6);

        switch (operation)
        {
        case 0:
        {
            cout << "\nGoodbye!" << endl;
            exit(0);        
        }
        case 1:
        {
            //cout << "Add teacher\n" << endl;
            teachersList.addTeacher();
            break;
        }
        case 2:
        {
            //cout << "See all teachers\n" << endl;
            teachersList.seeAllTeachers();
            break;
        }
        case 3:
        {
            //cout << "Save to file\n" << endl;
            teachersList.saveToFile();
            break;
        }
        case 4:
        {
            //cout << "Download from file\n" << endl;
            teachersList.loadFromFile();
            break;
        }
        case 5:
        {
            //cout << "Delete teachers\n" << endl;
            teachersList.deleteAllTeachers();
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

