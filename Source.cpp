#include <iostream>
#include <string>
#include <conio.h>


using namespace std;
void menu();
void admin();
void admpatManage();           //in admin main menu
void user();
void admApp();               //in admin main menu
void admViewpat();           //in admin main menu
void userApp();              //in User main menu
void userDoc();            //in User main menu
void userPatient();       //in User main menu

void admPatadd();
void admPatedit();
void admPatdel();
void admAppcreate();
void admAppdel();
void admViewsearch();
void admViewpatlist();
void userAppreschedule();
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
};
Patient patient[15] = { {11,"M Ali",19,24},{12,"Mustafa",17,31},{13,"Fahad",18,32} };
int patId = 13;
int patCounter = 3;

int main()
{
    cout << "\n\n\t\t***Welcome to The Hospital***" << endl;
    menu();
    return 0;
}
void menu()
{

    bool mainMenuloop = true;
    char choice = 0;


    while (mainMenuloop)
    {
        cout << "\n\n\t\tChoose Your Status\n" << endl;
        cout << "\t\tPress 1 for Admin" << endl;
        cout << "\t\tPress 2 for User" << endl;
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
    bool adminMenuloop = true;
    
    char adminAppointments = 0;
    while (adminMenuloop)
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
            adminMenuloop = false;
            break;
        }

        cout << "\n\tPassword: ";
        cin >> passWord;

        if (userName == corrUsername && passWord == corrPass)
        {
            cout << "\n\t\t***Login Successful***" << endl;

            bool loggedInadminloop = true;
            while (loggedInadminloop)
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
                        loggedInadminloop = false;          // exiting while loop going back to main menu when while(loggedInadmin) gets false
                        adminMenuloop = false;
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
    
    bool userMenuloop = true;
    while (userMenuloop)
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
                userMenuloop = false;                      //To go back, Exits while(userMenu) when it gets false
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
    bool adminPatmanageloop = true;
    while (adminPatmanageloop)
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
                adminPatmanageloop = false;
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
    bool adminApploop = true;
    while (adminApploop)
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
                adminApploop = false;
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
    bool adminViewloop = true;
    
    
    while (adminViewloop)
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
                adminViewloop = false;
                

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
    bool userAppointmentloop = true;
    while (userAppointmentloop)
    {
        cout << "\n\n\t\t***User Appointments***" << endl;
        char userAppointment = 0;
        cout << "\n\n\t\tPress 1 to Book Appointment\n\t\tPress 2 to Request of Another time for already booked Appointment ( Reschecudle )\n\t\tPress 3 to go back" << endl;
        cin >> userAppointment;
        if (isdigit(userAppointment))
        {
            switch (userAppointment)
            {
            case '1':
                userAppbook();
                break;

            case '2':
                userAppreschedule();
                break;

            case '3':
                cout << "\n\n\t\t***Go Back***" << endl;
                userAppointmentloop = false;
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
    bool userDoctorsloop = true;
    while (userDoctorsloop)
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
                userDoctorsloop = false;
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
    bool userPatientloop = true;
    while (userPatientloop)
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
                userPatientloop = false;
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
        bool adminPatdelloop = true;
        while (adminPatdelloop)
        {
            cout << "\n\n\t\t***Delete Patient***" << endl;


            break;
        }
    }

    void admPatedit()
    {
        bool adminPateditloop = true;
        while (adminPateditloop)
        {
            cout << "\n\n\t\t***Edit Patient***" << endl;
            break;
        }
    }

void admAppcreate()
{
    bool adminAppcreateloop = true;
    while (adminAppcreateloop)
    {
        cout << "\n\n\t\t***Create Appointment***" << endl;
        break;
    }
   
}

void admAppdel()
{
    bool adminAppdelloop = true;
    while (adminAppdelloop)
    {
        cout << "\n\n\t\t***Delete Appointment***" << endl;
        break;
    }
}

void admViewsearch()
{
    bool adminViewsearchloop = true;
    while (adminViewsearchloop)
    {
        cout << "\n\n\t\t***Search Patients By ID***" << endl;
        break;
    }
}

void admViewpatlist()
{
    cout << "\n\n\t\t***View Patient List***" << endl;
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
                cout << "\t\t" << patient[i].room<<endl;
            }
        }
    }


    cout << "\n\t\tPress Key to COntinue" << endl;
    _getch();

}

void userAppbook()
{
    bool userAppbookloop = true;
    while (userAppbookloop)
    {
        cout << "\n\n\t\t***Book Appointments***" << endl;
        break;
    }
}

void userAppreschedule()
{
    bool userAppresc_loop = true;
    while (userAppresc_loop)
    {
        cout<<"\n\n\t\t***Reschecudle***" << endl;
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
