#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/*UMS Version 4 is developed with the concept of conditional statment ,functions and loops ...
 */
// Funcion Prototype
void header();
char menu();
void diplay_student(string name, float matric, float fsc, float ecat);
void merit_order(string st1_name, string st2_name, string st3_name, string st4_name, float st1_matric, float st2_matric, float st3_matric, float st4_matric, float st1_fsc, float st2_fsc, float st3_fsc, float st4_fsc, float st1_ecat, float st2_ecat, float st3_ecat, float st4_ecat);
float aggregate(float matric, float fsc, float ecat);
void clearScreen();
int main()
{
    // data structure to store students information
    // Locial variables as
    string st1_name, st2_name, st3_name, st4_name;
    float st1_matric = 0, st2_matric = 0, st3_matric = 0, st4_matric = 0;
    float st1_fsc = 0, st2_fsc = 0, st3_fsc = 0, st4_fsc = 0;
    float st1_ecat = 0, st2_ecat = 0, st3_ecat = 0, st4_ecat = 0;

    int student_count = 1;
    char option = ' ';
    while (option != '6')
    {
        option = menu();
        // Add students records
        if (option == '1')
        {

            if (student_count == 1)
            {
                cout << "Enter Student Name...................";
                cin >> st1_name;
                cout << "Enter Obtained Marks in Matric.......";
                cin >> st1_matric;
                cout << "Enter Obtained Marks in First Year...";
                cin >> st1_fsc;
                cout << "Enter Obtained Marks in ECAT.........";
                cin >> st1_ecat;
                student_count = student_count++;
                clearScreen();
            } // first student record
            else if (student_count == 2)
            {
                cout << "Enter Student Name...................";
                cin >> st2_name;
                cout << "Enter Obtained Marks in Matric.......";
                cin >> st2_matric;
                cout << "Enter Obtained Marks in First Year...";
                cin >> st2_fsc;
                cout << "Enter Obtained Marks in ECAT.........";
                cin >> st2_ecat;
                student_count = student_count++;
                clearScreen();
            } // second student record

            else if (student_count == 3)
            {
                cout << "Enter Student Name...................";
                cin >> st3_name;
                cout << "Enter Obtained Marks in Matric.......";
                cin >> st3_matric;
                cout << "Enter Obtained Marks in First Year...";
                cin >> st3_fsc;
                cout << "Enter Obtained Marks in ECAT.........";
                cin >> st3_ecat;
                student_count = student_count++;
                clearScreen();
            } // third student record

            else if (student_count == 4)
            {
                cout << "Enter Student Name...................";
                cin >> st4_name;
                cout << "Enter Obtained Marks in Matric.......";
                cin >> st4_matric;
                cout << "Enter Obtained Marks in First Year...";
                cin >> st4_fsc;
                cout << "Enter Obtained Marks in ECAT.........";
                cin >> st4_ecat;
                student_count = student_count++;
                clearScreen();
            } // fourth student record
            else
            {
                cout << "No more space to store student record " << endl;
            } // end of students option and student record
        }
        // 2. View all Records
        else if (option == '2')
        {
            cout << "Name"
                 << "\t"
                 << "Matric "
                 << "\t"
                 << "Fsc"
                 << "\t"
                 << "Ecat" << endl;
            diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            clearScreen();
        }
        // 3. Merit Order
        else if (option == '3')
        {

            merit_order(st1_name, st2_name, st3_name, st4_name, st1_matric, st2_matric, st3_matric, st4_matric, st1_fsc, st2_fsc, st3_fsc, st4_fsc, st1_ecat, st2_ecat, st3_ecat, st4_ecat);
            clearScreen();
        }
        // 4. Generate Merit List
        else if (option == '4')
        {
            cout << "Not have any record yet";
        }
        // 5. Program Seat Managment
        else if (option == '5')
        {
            cout << "Not have any record yet";
        }
        // 6. Exit
        else if (option == '6')
        {
            // UMS Closing message
            header();
            cout << "Thank for using UMS, have a nice day.";
        }
        else
        {
            cout << "Invalid option";
        }
    }

} // end of main function

// Function Definition

void header()
{
    cout << "*********************************************************************************" << endl;
    cout << "*\t\t\tUniversity Admission Management System\t\t\t*" << endl;
    cout << "*********************************************************************************" << endl;
} // end of my header function
char menu()
{

    header();
    cout << "Main Menu >" << endl;
    cout << "----------------------" << endl;
    cout << "Select the one of the option from followings " << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. View all Records" << endl;
    cout << "3. Merit Order" << endl;
    cout << "4. Generate Merit List" << endl;
    cout << "5. Program Seat Managment" << endl;
    cout << "6. Exit" << endl;
    char option;
    cout << "Your option :";
    cin >> option;
    return option;
} // end of menu function
void diplay_student(string name, float matric, float fsc, float ecat)
{
    if (matric > 0)
    {
        cout << name << "\t" << matric << "\t" << fsc << "\t" << ecat << endl;
    }
} // end of display student function body

void merit_order(string st1_name, string st2_name, string st3_name, string st4_name, float st1_matric, float st2_matric, float st3_matric, float st4_matric, float st1_fsc, float st2_fsc, float st3_fsc, float st4_fsc, float st1_ecat, float st2_ecat, float st3_ecat, float st4_ecat)
{
    float st1_agri = aggregate(st1_matric, st1_fsc, st1_ecat);
    float st2_agri = aggregate(st2_matric, st2_fsc, st2_ecat);
    float st3_agri = aggregate(st3_matric, st3_fsc, st3_ecat);
    float st4_agri = aggregate(st3_matric, st4_fsc, st4_ecat);

    // Student 1 is graetest
    if (st1_agri > st2_agri && st1_agri > st3_agri && st1_agri > st4_agri)
    {
        diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
        // Student 2 is graeter then other 3 and 4
        if (st2_agri > st3_agri && st2_agri > st4_agri)
        {
            diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            // Student 3 is greater then student 4
            if (st3_agri > st4_agri)
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
            // Student 4 is greater then student 3
            else
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
        }
        // student 3 is greater than other 2 and 4
        else if (st3_agri > st2_agri && st3_agri > st4_agri)
        {
            diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            // Student 4 is greater then student 2
            if (st4_agri > st2_agri)
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
            // Student 2 is greater then student 4
            else
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
        }
        // student 4 is greater than other 3 and 2
        else if (st4_agri > st3_agri && st4_agri > st2_agri)
        {
            diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            // Student 3 is greater then student 2
            if (st3_agri > st2_agri)
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
            // Student 2 is greater then student 3
            else
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
        }
    } // end of student 1 is greatest

    // Student 2 is graetest
    if (st2_agri > st1_agri && st2_agri > st3_agri && st2_agri > st4_agri)
    {
        diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);

        // Student 1 is graeter then other 3 and 4
        if (st1_agri > st3_agri && st1_agri > st4_agri)
        {
            diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);

            // Student 3 is greater then student 4
            if (st3_agri > st4_agri)
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
            // Student 4 is greater then student 3
            else
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
        }
        // student 3 is greater than other 1 and 4
        else if (st3_agri > st1_agri && st3_agri > st4_agri)
        {
            diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            // Student 4 is greater then student 1
            if (st4_agri > st2_agri)
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 4
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
        }
        // student 4 is greater than other 3 and 1
        else if (st4_agri > st3_agri && st4_agri > st1_agri)
        {
            diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            // Student 3 is greater then student 1
            if (st3_agri > st1_agri)
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 3
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
        }
    } // end of student 2 is greatest

    // Student 3 is graetest
    if (st3_agri > st1_agri && st3_agri > st2_agri && st3_agri > st4_agri)
    {
        diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);

        // Student 1 is graeter then other 2 and 4
        if (st1_agri > st2_agri && st1_agri > st4_agri)
        {
            diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);

            // Student 2 is greater then student 4
            if (st2_agri > st4_agri)
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
            // Student 4 is greater then student 2
            else
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
        }
        // student 2 is greater than other 1 and 4
        else if (st2_agri > st1_agri && st2_agri > st4_agri)
        {
            diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            // Student 4 is greater then student 1
            if (st4_agri > st1_agri)
            {
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 4
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            }
        }
        // student 4 is greater than other 2 and 1
        else if (st4_agri > st2_agri && st4_agri > st1_agri)
        {
            diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            // Student 2 is greater then student 1
            if (st2_agri > st1_agri)
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 2
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
        }
    } // end of student 3 is greatest

    // Student 4 is graetest
    if (st4_agri > st1_agri && st4_agri > st2_agri && st4_agri > st3_agri)
    {
        diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);

        // Student 1 is graeter then other 2 and 3
        if (st1_agri > st2_agri && st1_agri > st3_agri)
        {
            diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);

            // Student 2 is greater then student 3
            if (st2_agri > st3_agri)
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
            // Student 3 is greater then student 2
            else
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
        }
        // student 2 is greater than other 1 and 3
        else if (st2_agri > st1_agri && st2_agri > st3_agri)
        {
            diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            // Student 3 is greater then student 1
            if (st3_agri > st1_agri)
            {
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 3
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st3_name, st3_matric, st3_fsc, st3_ecat);
            }
        }
        // student 3 is greater than other 2 and 1
        else if (st4_agri > st2_agri && st4_agri > st1_agri)
        {
            diplay_student(st4_name, st4_matric, st4_fsc, st4_ecat);
            // Student 2 is greater then student 1
            if (st2_agri > st1_agri)
            {
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
            }
            // Student 1 is greater then student 2
            else
            {
                diplay_student(st1_name, st1_matric, st1_fsc, st1_ecat);
                diplay_student(st2_name, st2_matric, st2_fsc, st2_ecat);
            }
        }
    } // end of student 4 is greatest

} // merit order function

float aggregate(float matric, float fsc, float ecat)
{
    float merit = ((matric * 100 / 1100) * 0.25) + ((fsc * 100 / 550) * 0.45) + ((ecat * 100 / 400) * 0.30);
    return merit;
} // aggregate function
void clearScreen()
{
    cout << "Prss anykey to contine..." << endl;
    getch();       // It library is conio.h
    system("cls"); // Its library is stdlib.h
}