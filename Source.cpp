#include <iostream>
#include <string>
#include <conio.h>                  //FOR _getch();


using namespace std;
void menu();
void admin();
void admpatManage();           //in main admin main menu
void user();
void admApp();               //in main admin main menu
void admViewpat();           //in main admin main menu
void userApp();              //in main User main menu
void userDoc();            //in main User main menu
void userPatient();       //in main User main menu

void admPatadd();
void admPatedit();
int searchpat(int);          //***PATIENT SEARCHING FUNTION, IT RETURNS INT , RETURNS THE INDEX ON WHICH IT IS STORED*** 
int searchAppo(int);
void admPatdel();
void admAppcreate();
void admAppdel();

void admViewsearch();
void admViewpatlist();
void userApposearch();
void userDocavailable();
void userDocroom();
void userPatroom();
void userPatreport();
void userAppbook();

struct Patient
{
    int id;
    string name;
    int age;
    int room;

        void input()
        {
                cout << "Enter Name :";
                cin.ignore();
                cin.clear();
                getline(cin, name);
                
                cout << "Enter Age :";
                cin >> age;
        }
};

struct Doctor
{
    int id;
    string docName;
};

struct Date
{
    int day;
    int month;
    int year;
    void input()
    {
        cout << "Enter Day :";
        cin >> day;
        cout << "Enter The Month :";
        cin >> month;
        cout << "Enter Year :";
        cin >> year;
    }
};

struct Appointment
{
    
    int appId;
    int patientID;
    string docName;
    Date appointmentDate;
    void input()
    {
        cout << "Enter Name of Doctor for Appointment :";
        cin.ignore();
        cin.clear();
        getline(cin, docName);
        cout << "\tEnter Date :\n";
        appointmentDate.input();
    }

};
                //***DATE IS IN SEPARATE BRACKET BECAUSE IT IS AnOTHER Struct***

Appointment appointments[15] = { {101,11,"Dr. Huzaifa",{20,1,2026}},{102,12,"Dr. Imran Khan",{22,1,2026}} };
int appoCount = 2;
int appoID = 102;

                  //***ID--NAME---AGE--ROOM  of Patient***
                                                                
Patient patient[15] = { {11,"M Ali",19,24},{12,"Mustafa",17,31},{13,"Fahad",18,32} };
int patId = 13;
int patCounter = 3;     //Total Patients in Data



int main()
{
    cout << "\n\n\t\t***Welcome to The Hospital***" << endl;
    menu();
    return 0;
}
void menu()
{

    bool mainMenu_loop = true;
    char choice = 0;


    while (mainMenu_loop)
    {
        cout << "\n\n\t\tChoose Your Status\n" << endl;
        cout << "\t\tPress 1 for Admin" << endl;
        cout << "\t\tPress 2 for User" << endl;
        cout << "\t\tPress 3 To Exit" << endl;
        cin >> choice;

        if (isdigit(choice))
        {
            switch (choice)
            {
            case '1':
                admin();
                break;

            case '2':
                user();
                break;

            case '3':
                exit(1);
            default:
                cout << "\n\n\t\t*** Invalid Choice Entered...Please Try Again and Enter 1 for Admin OR 2 for User***\n" << endl;
                break;

            }
        }
        else
        {
            cout << "\n\n\t\t*** Character Entered...Please Try Again And Enter Valid Choice ***\n" << endl;
        }
    }

}
void admin()
{
    bool adminMenu_loop = true;
    
    char adminAppointments = 0;
    while (adminMenu_loop)
    {
        string userName;
        string passWord;
        string corrUsername = "Mohammad Ali", corrPass = "123abc";

        cout << "\n\tEnter Your User Name and Password" << endl;
        cout << "\n\t***Username Should not have spaces***\n\n\tEnter B to go back to Selection Menu\n\n\tUsername :";
        cin.ignore();
        cin.clear();
        getline(cin, userName);

        if (userName == "B" || userName == "b")
        {
            adminMenu_loop = false;
            break;
        }

        cout << "\n\tPassword: ";
        cin >> passWord;

        if (userName == corrUsername && passWord == corrPass)
        {
            cout << "\n\t\t***Login Successful***" << endl;

            bool loggedInadmin_loop = true;
            while (loggedInadmin_loop)
            {
                cout << "\n\n\t\tPress 1 for Patient Management\n\t\tPress 2 for Appointments\n\t\tPress 3 to View Patients\n\t\tPress 4 to go back / log out" << endl;

                char adminChoice;
                cin >> adminChoice;

                if (isdigit(adminChoice))
                {
                    switch (adminChoice)
                    {
                    case '1':
                        admpatManage();
                        break;
                        

                    case '2':

                        admApp();
                        break;

                    case '3':
                        admViewpat();
                        break;

                    case '4':
                        cout << "\n\n\t\t***Going Back to Main Menu***" << endl;
                        return;
                        break;

                    default:
                        cout << "\n\n\t\tInvalid Selection...Digit out of range" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "\n\n\t\tInvalid Selection...Character Entered";
                    cout << "\n\n\t\tTry Again\n";
                }

            }
        }
        else
        {
            cout << "\n\t\t***Incorrect Username or Password***\n\n\tPlease try again\n" << endl;
        }
    }

}
void user()
{
    
    bool userMenu_loop = true;
    while (userMenu_loop)
    {
        cout << "\n\n\t\t***User Menu***\n";
        cout << "\n\t\tPress 1 for Appointments\n\t\tPress 2 to View Available Doctors\n\t\tPress 3 for Patients\n\t\tPress 4 to go Back to Main Menu\n";

        char userChoice;
        cin >> userChoice;

        if (isdigit(userChoice))
        {
            switch (userChoice)
            {
            case '1':
                userApp();
                break;
            case '2':
                userDoc();
                break;
            case '3':
                userPatient();
                break;
            case '4':
                cout << "\n\n\t\t***Going Back to Main Menu***" << endl;
                return;
                break;
            default:
                cout << "\n\n\t\t***Invalid Choice Entered***\n\t\tPlease Try Again" << endl;
                break;
            }
        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered";
            cout << "\n\n\t\tTry Again\n";
        }
    }

   
}
void admpatManage()
{
    bool adminPatmanage_loop = true;
    while (adminPatmanage_loop)
    {
        char adminpatMan = 0;
        cout << "\n\n\t\t***Patient Management***" << endl;
        cout << "\n\n\t\tPress 1 to Add Patient\n\t\tPress 2 to Delete Patient\n\t\tPress 3 to Edit Patient\n\t\tPress 4 to Go back" << endl;

        cin >> adminpatMan;
        if (isdigit(adminpatMan))
        {
            switch (adminpatMan)
            {
            case '1':
                admPatadd();
                break;
            case '2':
                admPatdel();
                break;
            case '3':
                admPatedit();
                break;
            case '4':
                cout << "\n\n\t\t***Going Back***" << endl;
                adminPatmanage_loop = false;
                break;
                
            default:
                cout << "Invalid Selection" << endl;
                break;
            }
        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered";
            cout << "\n\n\t\tTry Again\n";
        }
    }

}

void admApp()
{
    bool adminApp_loop = true;
    while (adminApp_loop)
    {

        char adminAppointments = 0;
        cout << "\n\n\t\t***Appointments***" << endl;
        cout << "\n\n\t\tPress 1 to Create Appointment\n\t\tPress 2 to Delete Appointment\n\t\tPress 3 to go back" << endl;

        cin >> adminAppointments;
        if (isdigit(adminAppointments))
        {
            switch (adminAppointments)
            {
            case '1':
                admAppcreate();
                break;
            case '2':
                admAppdel();
                break;
            case '3':
                cout << "\n\n\t\t***Going Back***" << endl;
                adminApp_loop = false;
                break;
            default:
                cout << "Invalid Selection" << endl;
                break;
            }
        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered";
            cout << "\n\n\t\tTry Again\n";

        }

    }

}

void admViewpat()
{
    bool adminView_loop = true;
    
    
    while (adminView_loop)
    {
        char adminView = 0;
        cout << "\n\n\t\t***View Patients***" << endl;
        cout << "\n\n\t\tPress 1 to Search Patients By ID\n\t\tPress 2 to View Patient List\n\t\tPress 3 to go back" << endl;
        cin >> adminView;
        if (isdigit(adminView))
        {
            switch (adminView)
            {
            case'1':
                admViewsearch();
                break;
            case '2':
                admViewpatlist();
                break;

            case '3':
                cout << "\n\n\t\t***GO BACK***" << endl;
                adminView_loop = false;
                

                break;

            default:
                cout << "\n\n\t\t***Invalid Choice Entered***\n\t\tPlease Try Again" << endl;
                break;

            }
        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered";
            cout << "\n\n\t\tTry Again\n";
        }

    }
}
void userApp()
{
    bool userAppointment_loop = true;
    while (userAppointment_loop)
    {
        cout << "\n\n\t\t***User Appointments***" << endl;
        char userAppointment = 0;
        cout << "\n\n\t\tPress 1 to Book Appointment\n\t\tPress 2 to View My Appointments by ID\n\t\tPress 3 to go back" << endl;
        cin >> userAppointment;
        if (isdigit(userAppointment))
        {
            switch (userAppointment)
            {
            case '1':
                userAppbook();
                break;

            case '2':
                userApposearch();
                break;

            case '3':
                cout << "\n\n\t\t***Go Back***" << endl;
                userAppointment_loop = false;
                break;
            default:
                cout << "\n\n\t\tInvalid Selection...Please Try Again" << endl;
                break;
            }
        

        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered" << endl;
            cout << "\n\n\t\tTry Again\n";
        }
    }
}

void userDoc()
{
    bool userDoctors_loop = true;
    while (userDoctors_loop)
    {
        cout << "\n\n\t\t***User Doctors***" << endl;
        char userDoctors = 0;
        cout << "\n\n\t\tPress 1 to See all Available Doctors\n\t\tPress 2 to See a Doctor's Room Number\n\t\tPress 3 to go back" << endl;
        cin >> userDoctors;
        if (isdigit(userDoctors))
        {
            switch (userDoctors)
            {
            case '1':
                userDocavailable();
                break;
            case '2':
                userDocroom();
                break;
            case '3':
                cout << "\n\n\t\t***Go Back***" << endl;
                userDoctors_loop = false;
                break;
            default:
                cout << "\n\n\t\tInvalid Selection...Please Try Again" << endl;
                break;
            }


        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered" << endl;
            cout << "\n\n\t\tTry Again\n";
        }
    }

}

void userPatient()
{
    bool userPatient_loop = true;
    while (userPatient_loop)
    {
        cout << "\n\n\t\t***User Patients***" << endl;
        char userPatients = 0;
        cout << "\n\n\t\tPress 1 to Find Patients Room Number\n\t\tPress 2 to See your Patients Report\n\t\tPress 3 to go back" << endl;
        cin >> userPatients;
        if (isdigit(userPatients))
        {
            switch (userPatients)
            {
            case '1':
                userPatroom();
                break;
            case '2':
                userPatreport();
                break;
            case '3':
                cout << "\n\n\t\t***Go Back***" << endl;
                userPatient_loop = false;
                break;
            default:
                cout << "\n\n\t\tInvalid Selection...Please Try Again" << endl;
                break;
            }


        }
        else
        {
            cout << "\n\n\t\tInvalid Selection...Character Entered" << endl;
            cout << "\n\n\t\tTry Again\n";
        }
    }

}

    void admPatadd()
    {
        
        char choice;
            if (patCounter >= 15)
            {
                cout << "\n\n\t\t***The List is Full 15/15***" << endl;
            }
            else
            {
                cout << "\n\n\t\t***Add Patient***" << endl;
                patId++;
                cout << "\n\n\t\tPatient ID :" << patId << endl;
                
                patient[patCounter].input();
                patient[patCounter].id = patId;
                cout << "\n\tDo You also want to add room number if the patient will get admitted to the Hospital\nPress Y for Yes\nPress N for No\n" << endl;
                cin >> choice;
                choice = toupper(choice);
                if (choice == 'Y')
                {
                    int room = 0;
                    bool roomLoop = true;
                    while (roomLoop)
                    {

                        cout << "Enter Room Number You Want to Assign for the Patient between room 20-50" << endl;
                        cin >> room;
                        if (room < 20 || room>50)
                        {
                            cout << "\n\tInvalid Room Number Entered...Enter From 20 to 50\n" << endl;
                            continue;

                        }
                        bool roomTaken = false;
                        for (int i = 0; i < patCounter; i++)
                        {
                            if (patient[i].room == room)
                            {
                                roomTaken = true;
                                break;
                            }
                        }
                        if (roomTaken)
                        {
                            cout << "\n\n\t\t***The Room is Already Taken***\n\t\tPlease Enter Different Room Number" << endl;
                        }
                        else
                        {

                            patient[patCounter].room = room;

                            roomLoop = false;
                        }


                    }

                    
                }
                
                patCounter++;
                
                cout << "Press any key to continue" << endl;
                _getch();
            }

            

    }

    void admPatdel()
    {
        int pat_ID;
        bool adminPatdel_loop = true;
        int index;
        char ch;
        while (adminPatdel_loop)
        {
            cout << "\n\n\t\t***Delete Patient***" << endl;
            cout << "\n\n\t\tEnter ID of The Patient You Want to Delete\n\t\tEnter 0 to Exit :";
            cin >> pat_ID;
            if (pat_ID == 0)
            {
                return;
            }
            index = searchpat(pat_ID);
            if (index == -1)
            {
                cout << "Not Found" << endl;
                cout << "Press any KEY" << endl;
                _getch();
            }
            else
            {
                cout << "Patient ID :" << patient[index].id << endl;
                cout << "Patient Name :" << patient[index].name << endl;
                cout << "Patient Age :" << patient[index].age << endl;
                cout << "Patient Room :" << patient[index].room << endl;
                while (true)
                {
                    cout << "\n\n\t\t***DO YOU WANT TO DELETE DATA OF THIS PATIENT?***\n\tPress Y for Yes\n\tPress N for No (GO BACK)" << endl;
                    cin >> ch;
                    ch = toupper(ch);
                    if (isdigit(ch))
                    {
                        cout << "\n\n\t\tPlease Enter a Character...Try Again" << endl;
                        continue;
                    }
                    else if (ch == 'Y')
                    {

                        for (int i = index; i < patCounter - 1; i++)
                        {
                            patient[i] = patient[i + 1];
                        }
                        patCounter--;
                        cout << "\n\n\t\t***Patient Deleted Successfully***" << endl;
                        cout << "\n\tPress any key to continue..." << endl;
                        _getch();
                        return;


                    }
                    else if (ch == 'N')
                    {
                        cout << "No";
                        return;
                    }
                    else
                    {
                        cout << "\n\n\t\tWrong Choice Entered...Try Again" << endl;
                        continue;
                    }

                }

            }



            break;
        }
    }

    void admPatedit()
    {
        int index;
        bool adminPatedit_loop = true;
        int pat_ID;
        char choice;
        int newAge;
        int newRoom;
        string newName;

        while (adminPatedit_loop)
        {
            cout << "\n\n\t\t***Edit Patient***" << endl;
            cout << "\n\t\tEnter The ID of Patient You want to Edit\n\t\tEnter 0 to Exit :";
            cin >> pat_ID;
                if (pat_ID == 0)
                {
                    return;
                }

                index = searchpat(pat_ID);
                if (index == -1)
                {
                    cout << "Not Found" << endl;
                    cout << "Press any KEY" << endl;
                    _getch();
                }
                else
                {
                    cout << "Patient ID :" << patient[index].id << endl;
                    cout << "Patient Name :" << patient[index].name << endl;
                    cout << "Patient Age :" << patient[index].age << endl;
                    cout << "Patient Room :" << patient[index].room << endl;
                    while (true)
                    {
                        cout << "\n\n\t\tPress 1 to Edit Age\n\t\tPress 2 to Edit Room\n\t\tPress 3 to Edit Name\n\t\tPress 4 to Go Back" << endl;
                        cin >> choice;
                        if (isdigit(choice))
                        {
                            switch (choice)
                            {
                            case '1':
                                cout << "\n\n\t\tEnter New Age :";
                                cin >> newAge;
                                patient[index].age = newAge;
                                cout << "\n\t\t***Successfully Edited Age***\nPress Any Kew to Continue" << endl;
                                _getch();
                                break;

                            case '2':
                                cout << "\n\n\t\tEnter New Room Number :";
                                cin >> newRoom;
                                patient[index].room = newRoom;
                                cout << "\n\t\t***Successfully Edited Room Number***\nPress Any Kew to Continue" << endl;
                                _getch();
                                break;

                            case '3':
                                cout << "\n\n\t\tEnter New Name :";
                                cin.ignore();
                                cin.clear();
                                getline(cin, newName);
                                patient[index].name = newName;
                                cout << "\n\t\t***Successfully Edited Patient Name***\nPress Any Kew to Continue" << endl;
                                _getch();
                                break;

                            case '4':
                                cout << "\n\n\t\t***Going Back***" << endl;
                                return;
                            default:
                                cout << "Invalid Choice Entered...Press Any Key to Try Again" << endl;
                                break;

                            }
                        }
                        else
                        {
                            cout << "Character Entered... Please Enter Valid Choice" << endl;
                            continue;

                        }
                    }
                }
            
            
            
            break;
        }
    }

    int searchpat(int findPatid)
    {
        for (int i = 0; i < patCounter; i++)
        {
            if (patient[i].id == findPatid)
            {
                return i;
            }
        }
        return -1;
    }


    int searchAppo(int appId)
    {
        for (int i = 0; i < appoCount; i++)
        {
            if (appointments[i].appId == appId)
            {
                return i;
            }
        }
        return -1;
    }


void admAppcreate()
{
    int patidEntered = 0;
    char choice;
    int index;
    cout << "\n\n\t\t***Create Appointment***" << endl;
    cout << "\n\n\t***You Have To Add Patient Before Creating Appointment***" << endl;
    cout << "\n\t\tIf Patient is already added press Y to continue\n\t\tPress N to Add Patient" << endl;
    cin >> choice;
    choice = toupper(choice);
    if (choice=='N')
    {
        admPatadd();
        
    }
    else if (choice == 'Y')
    {
        if (appoCount >= 15)
        {
            cout << "***THE APPOINTMENTS ARE FULL***" << endl;
            return;
        }
        else
        {
            cout << "\n\n\t\t***LIST OF ALL ADDED PATIENTS***" << endl;
            cout << "\n\tPatient ID\tPatient Name\tPatient Age\tRoom Number" << endl;
            if (patCounter == 0)
            {
                cout << "\n\n\t\t***No Patients***" << endl;
            }
            else
            {
                for (int i = 0; i < patCounter; i++)
                {
                    cout << "\t" << patient[i].id;
                    cout << "\t\t" << patient[i].name;
                    cout << "\t\t" << patient[i].age;
                    if (patient[i].room == 0)
                    {
                        cout << "\t\tNot in Room" << endl;
                    }
                    else
                    {
                        cout << "\t\t" << patient[i].room << endl;
                    }
                }
            }
            
            cout << "\n\n\tEnter the ID of patient you want to create appointment for :";
            cin >> patidEntered;
            index = searchpat(patidEntered);                                        // search id function returns on which index of the array the id is present............
            if (index == -1)                    //returns -1 if the id is not found in the array............
            {
                cout << "\n\n\tNo patient Found with the ID you Entered :" << patidEntered << endl;
                cout << "Press Any Key to Continue..." << endl;
                _getch();
                return;
            }

            appoID++;
            appointments[appoCount].appId = appoID;
            appointments[appoCount].patientID = patidEntered;
            appointments[appoCount].input();
            appoCount++;

            cout << "\n\n\tThe Appointment of Patient ID: " << patidEntered << " was created SuccessfuLly" << endl;
            cout << "\tThe Appointment ID is :" << appoID << endl;

            cout << "\n\tPress any key to continue..." << endl;
            _getch();
        }
    }
    
}

void admAppdel()
{
    bool adminAppdel_loop = true;
    while (adminAppdel_loop)
    {
        cout << "\n\n\t\t***Delete Appointment***" << endl;
        break;
    }
}


void admViewsearch()
{
    int pat_ID;
    int index;
    bool adminViewsearch_loop = true;
    while (adminViewsearch_loop)
    {
        cout << "\n\n\t\t***Search Patients By ID***" << endl;
        cout << "\n\tEnter The ID of Patient\n\tEnter 0 to Go Back :";
        cin >> pat_ID;
        if (pat_ID == 0)
        {
            return;
        }
        index = searchpat(pat_ID);
        if (index == -1)
        {
            cout << "\n\n\t\tNot found\n\t\tPress Any Key to Continue" << endl;
            _getch();
         
        }
        else
        {
            cout << "\n\t\tPatient ID :" << patient[index].id << endl;
            cout << "\n\tPatient Name\t:" << patient[index].name << endl;
            cout << "\tPatient Age\t:" << patient[index].age << endl;
            if (patient[index].room == 0)
            {
                cout << "\tPatient Room\t:Not in Room" << endl;
            }
            else
            {
                cout << "\tPatient Room\t:" << patient[index].room << endl;
            }
            
            cout << "\n\tPress any key to continue" << endl;
            _getch();
        }
        break;
    }
}

void admViewpatlist()
{
    cout << "\n\n\t\t***View Patient List***" << endl;
    cout << "\n\t\tPatient ID\t*||*\tPatient Name\t*||*\tPatient Age\t*||*\tRoom Number" << endl;
    if (patCounter == 0)
    {
        cout << "\n\n\t\t***No Patients***" << endl;
    }
    else
    {
        for (int i = 0; i < patCounter; i++)
        {
            cout << "\t\t\t" << patient[i].id;
            cout << "\t\t" << patient[i].name;
            cout << "\t\t\t" << patient[i].age;
            if (patient[i].room == 0)
            {
                cout << "\t\tNot in Room" << endl;
            }
            else 
            {
                cout << "\t\t\t" << patient[i].room<<endl;
            }
        }
    }


    cout << "\n\t\tPress Key to COntinue" << endl;
    _getch();

}

void userAppbook()
{
    bool userAppbook_loop = true;
    while (userAppbook_loop)
    {
        cout << "\n\n\t\t***Book Appointments***" << endl;
        break;
    }
}

void userApposearch()
{
    int appID;
    int index;
    bool userApposearch_loop = true;
    while (userApposearch_loop)
    {
        cout << "\n\n\t\t***View Appointments By ID***" << endl;
        cout << "\n\n\tEnter Your Appointment ID to View Appointment\n\tEnter 0 to go Back :";
        cin >> appID;
        
        if (appID == 0)
        {
            return;
        }
        index = searchAppo(appID);
        if (index == -1)
        {
            cout << "\n\n\t\tNot found\n\t\tPress Any Key to Continue" << endl;
            _getch();
        }
        else
        {

            cout << "\n\tAppointment ID :" << appointments[index].appId << endl;
            cout << "\tDoctor Name :" << appointments[index].docName << endl;
            cout << "\tDate :";
            cout << "\n\t" << appointments[index].appointmentDate.day;
            cout << "\t/\t" << appointments[index].appointmentDate.month ;
            cout << "\t/\t" << appointments[index].appointmentDate.year << endl;
                
            cout << "\n\tPress any key to continue" << endl;
            _getch();


        }

        break;
    }

}


void userDocavailable()
{
    bool userDocAvail_loop = true;
    while (userDocAvail_loop)
    {
        cout << "\n\n\t\t***See all Available Doctors***" << endl;
        break;
    }
}

void userDocroom()
{
    bool userDocroom_loop = true;
    while (userDocroom_loop)
    {
        cout << "\n\n\t\t***See a Doctor's Room Number***" << endl;
        break;
    }
}

void userPatroom()
{
    bool userPatroom_loop = true;
    while (userPatroom_loop)
    {
        cout << "\n\n\t\t***Find Patients Room Number" << endl;
        break;
    }
}

void userPatreport()
{
    bool userPatreport_loop = true;
    while (userPatreport_loop)
    {
        cout << "\n\n\t\t***See your Patients Report***" << endl;
        break;
    }
}
// hellok
