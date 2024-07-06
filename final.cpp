//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>


// *****  Traffic Management System *****

// keep the record of vehicles                      == Record_Of_Vehicle()
// keep the record of challan done                  == Record_Of_Challan()
// Search the record of vehicles                    == Vehicle_Search()
// Helpline Information and nearby hospitals        == Help_Info()

using namespace std;

class TrafficManagementSystem
{

public:
    int home_page()
    {

        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                          WELCOME TO                                                             '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                   TRAFFIC MANAGEMENT SYSTEM                                                     '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                   Choose Your Option :-                                                                                         '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                    1.Record of Vehicles                                                                         '**" << endl;
        cout << "**'                                    2.Record of Vehicle Challan                                                                  '**" << endl;
        cout << "**'                                    3.Search Record of Vehicles                                                                  '**" << endl;
        cout << "**'                                    4.Help !                                                                                     '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                   Enter your choice :                                                                                           '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << "**'                                                                                                                                 '**" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << endl;
        int choice = 0;
        cin >> choice;

        if (choice > 0 && choice < 5)
        {
            switch (choice)
            {
            case 1:
                Record_Of_Vehicle();
                break;
            case 2:
                Record_Of_Challan();
                break;
            case 3:
                Vehicle_Search();
                break;
            case 4:
                Help_Info();
                break;
            }
        }
        else
        {
            cout << "Choose a valid option !!" << endl;
            home_page();
        }
        return 0;
    }

    int Record_Of_Vehicle()
    {
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                            WELCOME TO                                                               *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                     TRAFFIC MANAGEMENT SYSTEM                                                       *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                      * Record of Vehicles *                                                         *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Choose Your Option :-                                                                                           *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                      1. Add a New Vehicle                                                                           *" << endl;
        cout << "*                                      2. Search a Vehicle Using Registration number                                                  *" << endl;
        cout << "*                                      3. Search a Vehicle Using Name of the Owner                                                    *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Enter 0 For Home page                                                                                           *" << endl;
        cout << "*                     Enter your choice :                                                                                             *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << endl;

        int Veh_Choice = 0;
        cin >> Veh_Choice;
        switch (Veh_Choice)
        {
        case 0:
            home_page();
            break;

        case 1:
            Vehicle_fun1();
            break;

        case 2:
            Vehicle_fun2();
            break;

        case 3:
            Vehicle_fun3();
            break;
        }
        return 0;
    }
    void Vehicle_fun1()
    {
        fstream veh_file;
        string line;
        cout << "                    Welcome to Registration of Vehicles\n"
             << endl;
        cout << "Enter Registration number of the Vehicle in the first line " << endl;
        cout << "Enter Name of the owner in the second line " << endl;
        cout << "Enter 'exit' to Exit " << endl;
        veh_file.open("RecordOfVehicles.txt", ios::app | ios::out | ios::in);

        // Execute a loop If file successfully Opened
        while (veh_file)
        {

            // Read a Line from standard input
            getline(cin, line);

            // Enter 'exit' to exit
            if (line == "exit")
                break;

            // Write line in file
            veh_file << line << endl;
        }
        cout << "Data Entered successfully !!" << endl;

        Record_Of_Vehicle();
    }

    void Vehicle_fun2()
    {

        string path = "RecordOfVehicles.txt";
        ifstream file(path.c_str());

        if (file.is_open())
        {
            cout << "                    Welcome to Registration of Vehicles\n";

            cout << endl
                 << "Enter the Registration number of the vehicle you want to search for\n";
            string word;
            cin >> word;

            int countwords = 0;
            string candidate;
            while (file >> candidate) // for each candidate word read from the file
            {
                if (word == candidate)
                    ++countwords;
            }
            if (countwords > 0)
            {

                cout << "The Registration number " << word << " has been found in records." << endl;

                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_fun2();
                else
                    cout << "Invalid choice !";
            }
            else
            {
                cout << "Registration number not found !";
                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_fun2();
                else
                    cout << "Invalid choice !";
            }
        }

        else
        {
            cerr << "Error! \n";
            home_page();
        }
    }

    void Vehicle_fun3()
    {
        string path = "RecordOfVehicles.txt";
        ifstream file(path.c_str());

        if (file.is_open())
        {
            cout << "                    Welcome to Registration of Vehicles\n";

            cout << endl
                 << "Write the Name of the Owner of the vehicle you want to searching for\n";
            string word;
            cin >> word;

            int countwords = 0;
            string candidate;
            while (file >> candidate) // for each candidate word read from the file
            {
                if (word == candidate)
                    ++countwords;
            }
            if (countwords > 0)
            {
                cout << "The Name of the Owner " << word << " has been found in our records." << endl;

                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner" << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_fun3();
                else
                    cout << "Invalid choice";
            }
            else
            {
                cout << "Name of the Owner not foud !";
                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_fun3();
                else
                    cout << "Invalid choice !";
            }
        }

        else
        {
            cerr << "Error! \n";
            home_page();
        }
    }

    int Record_Of_Challan()
    {
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                            WELCOME TO                                                               *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                     TRAFFIC MANAGEMENT SYSTEM                                                       *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                      * Record of Challan *                                                          *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Choose Your Option :-                                                                                           *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                      1. Add a New Challan                                                                           *" << endl;
        cout << "*                                      2. Search a Challan Using Registration number                                                  *" << endl;
        cout << "*                                      3. Search a Challan Using Name of the owner                                                    *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Enter 0 For Home                                                                                                *" << endl;
        cout << "*                     Enter your choice :                                                                                             *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << endl;

        int Challan_choice = 0;
        cin >> Challan_choice;
        switch (Challan_choice)
        {
        case 0:
            home_page();
            break;
        case 1:
            Challan_fun1();
            break;
        case 2:
            Challan_fun2();
            break;

        case 3:
            Challan_fun3();
            break;
        default:
            cout << "Invalid choice !" << endl;
        }
        return 0;
    }

    void Challan_fun1()
    {
        fstream chal_file;
        string line;

        cout << "               Welcome to Challan Management System\n"
             << endl;

        cout << "Enter Registration number of the Vehicle in the first line " << endl;
        cout << "Enter Name of the owner in the second line " << endl;
        cout << endl
             << "Enter 'exit' to Exit " << endl;
        chal_file.open("RecordOfChallan.txt", ios::app | ios::out | ios::in);
        // Execute a loop If file successfully Opened
        while (chal_file)
        {

            // Read a Line from standard input
            getline(cin, line);

            // Enter 'exit' to exit
            if (line == "exit")
                break;

            // Write line in file
            chal_file << line << endl;
        }
        cout << "Data Entered successfully !" << endl;
        Record_Of_Challan();
    }

    void Challan_fun2()
    {
        string path = "RecordOfChallan.txt";
        ifstream file(path.c_str());

        if (file.is_open())
        {
            cout << "               Welcome to Challan Management System\n"
                 << endl;

            cout << endl
                 << "Write the registration number of the vehicle you want to searching for\n";
            string word;
            cin >> word;

            int countwords = 0;
            string candidate;
            while (file >> candidate) // for each candidate word read from the file
            {
                if (word == candidate)
                    ++countwords;
            }
            if (countwords > 0)
            {
                cout << "The Registration number " << word << " has been found in our records." << endl;

                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number." << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Challan_fun2();
                else
                    cout << "Invalid choice !";
            }
            else
            {
                cout << "Registration number not foud !!";
                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number." << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Challan_fun2();
                else
                    cout << "Invalid choice !";
            }
        }

        else
        {
            cerr << "Error! \n";
            home_page();
        }
    }

    void Challan_fun3()
    {

        string path = "RecordOfChallan.txt";
        ifstream file(path.c_str());

        if (file.is_open())
        {
            cout << "               Welcome to Challan Management System\n"
                 << endl;

            cout << endl
                 << "Write the Name of the Owner of the vehicle you want to searching for\n";
            string word;
            cin >> word;

            int countwords = 0;
            string candidate;
            while (file >> candidate) // for each candidate word read from the file
            {
                if (word == candidate)
                    ++countwords;
            }
            if (countwords > 0)
            {
                cout << "The Name of the Owner " << word << " has been found in our records." << endl;

                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner" << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Challan_fun3();
                else
                    cout << "Invalid choice !";
            }
            else
            {
                cout << "Name of the Owner not foud !!";
                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Challan_fun3();
                else
                    cout << "Invalid choice !";
            }
        }

        else
        {
            cerr << "Error!\n";
            home_page();
        }
    }

    void Vehicle_Search()
    {

        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                            WELCOME TO                                                               *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                 * Search the Record of Vehicles *                                                   *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                               Enter The Vehicles Registration Number                                                *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Enter 0 For Home                                                                                                *" << endl;
        cout << "*                     Enter your choice __                                                                                            *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << endl;

        string path = "RecordOfVehicles.txt";
        ifstream file(path.c_str());

        if (file.is_open())
        {
            string word;
            cin >> word;

            int countwords = 0;
            string candidate;
            while (file >> candidate) // for each candidate word read from the file
            {
                if (word == candidate)
                    ++countwords;
            }
            if (countwords > 0)
            {
                cout << "The registration number " << word << " has been found in our records." << endl;

                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_Search();
                else
                    cout << "Invalid choice !";
            }
            else
            {
                cout << "Registration number does not foud !";
                int choice;
                cout << endl
                     << "Enter 1 to go to home screen and enter 2 for again entering the registration number " << endl;
                cin >> choice;
                if (choice == 1)
                    home_page();
                else if (choice == 2)
                    Vehicle_Search();
                else
                    cout << "Invalid choice !";
            }
        }
        else
        {
            cerr << "Error! \n";
            home_page();
        }
    }

    void Help_Info()
    {
        // Helpline Information and nearby hospitals

        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                            WELCOME TO                                                               *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                     TRAFFIC MANAGEMENT SYSTEM                                                       *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                             * Helpline Information And Nearby Hospitals *                                           *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Choose Your Option :-                                                                                           *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                      1. Helpline Number                                                                             *" << endl;
        cout << "*                                      2. Hospitals in North Delhi                                                                    *" << endl;
        cout << "*                                      3. Hospitals in South Delhi                                                                    *" << endl;
        cout << "*                                      4. Hospitals in East Delhi                                                                     *" << endl;
        cout << "*                                      5. Hospitals in West Delhi                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                     Enter 0 For Home                                                                                                *" << endl;
        cout << "*                     Enter your choice :                                                                                             *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << "*                                                                                                                                     *" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << endl;

        int help_choice = 0;
        cin >> help_choice;
        switch (help_choice)
        {
        case 0:
            home_page();
            break;

        case 1:
        {
            // fstream help_file;
            string line;

            ifstream myfile("HelpNumbers.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else
                cout << "Error! ";

            int choice;
            cout << endl
                 << "Enter 1 to go Home Page" << endl;
            cin >> choice;
            if (choice == 1)
            {
                home_page();
            }
            else
            {
                cout << endl
                     << "Enter Valid option !";
                cout << endl
                     << endl
                     << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    home_page();
                }
            }
            break;
        }
        case 2:
        {
            string line;
            ifstream myfile("HspNorthDel.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else
                cout << "Error! ";

            int choice;
            cout << endl
                 << "Enter 1 to go Home Page" << endl;
            cin >> choice;
            if (choice == 1)
            {
                home_page();
            }
            else
            {
                cout << endl
                     << "Enter Valid option !!";
                cout << endl
                     << endl
                     << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    home_page();
                }
            }
            break;
        }

        case 3:
        {
            string line;
            ifstream myfile("HspSouthDel.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else
                cout << "Error! ";

            int choice;
            cout << endl
                 << "Enter 1 to go Home Page" << endl;
            cin >> choice;
            if (choice == 1)
            {
                home_page();
            }
            else
            {
                cout << endl
                     << "Enter Valid option !!";
                cout << endl
                     << endl
                     << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    home_page();
                }
            }

            break;
        }

        case 4:
        {
            string line;
            ifstream myfile("HspEastDel.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else
                cout << "Error! ";

            int choice;
            cout << endl
                 << "Enter 1 to go Home Page" << endl;
            cin >> choice;
            if (choice == 1)
            {
                home_page();
            }
            else
            {
                cout << endl
                     << "Enter Valid option !!";
                cout << endl
                     << endl
                     << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    home_page();
                }
            }
            break;
        }
        case 5:
        {
            string line;
            ifstream myfile("HspWestDel.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
            }
            else
                cout << "Error! ";

            int choice;
            cout << endl
                 << "Enter 1 to go Home Page" << endl;
            cin >> choice;
            if (choice == 1)
            {
                home_page();
            }
            else
            {
                cout << endl
                     << "Enter Valid option !!";
                cout << endl
                     << endl
                     << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    home_page();
                }
            }
            break;
        }
        }
    }
};

int main()
{
    TrafficManagementSystem obj;
    obj.home_page();
    return 0;
}