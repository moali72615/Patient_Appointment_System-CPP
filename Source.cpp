#include <iostream>
#include <string>

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

//void admPatadd();
//void admPatedit();
//void admPatdel();
//void admAppcreate();
//void 


int main()
{
    cout << "\n\n\t\t***Welcome to The Hospital***" << endl;
    menu();
    return 0;
}
void menu()
{

    bool mainMenuloop = true;
    char mainSelection = 0;


    while (mainMenuloop)
    {
        cout << "\n\n\t\tChoose Your Status\n" << endl;
        cout << "\t\tPress 1 for Admin" << endl;
        cout << "\t\tPress 2 for User" << endl;
        cin >> mainSelection;

        if (isdigit(mainSelection))
        {
            switch (mainSelection)
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
                cout << "\n\n\t\tPress 1 for Patient Management"
                    << "\n\t\tPress 2 for Appointments"
                    << "\n\t\tPress 3 to View Patients"
                    << "\n\t\tPress 4 to go back / log out" << endl;

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
        if (adminpatMan)
        {
            switch (adminpatMan)
            {
            case '1':
                cout << "\n\n\t\t***Add Patient***" << endl;
                //Function add krna hay
                break;
            case '2':
                cout << "\n\n\t\t***Delete Patient***" << endl;
                //Function add krna hay
                break;
            case '3':
                cout << "\n\n\t\t***Edit Patient***" << endl;
                //Function add krna hay
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
                cout << "\n\n\t\t***Create Appointment***" << endl;
                //Function add krna hay
                break;
            case '2':
                cout << "\n\n\t\t***Delete Appointment***" << endl;
                //Function add krna hay
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
                cout << "\n\n\t\t***Search Patients By ID***" << endl;
                //Function add krna hay
                break;
            case '2':
                cout << "\n\n\t\t***View Patient List***" << endl;
                //Function add krna hay

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
                cout << "\n\n\t\t***Book Appointment***" << endl;
                //Function add krna hay
                break;
            case '2':
                cout << "\n\n\t\t***Reschecudle***" << endl;
                //Function add krna hay
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
                cout << "\n\n\t\t***See all Available Doctors***" << endl;
                break;
            case '2':
                cout << "\n\n\t\t***See a Doctor's Room Number***" << endl;
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
                cout << "\n\n\t\t***Find Patients Room Number" << endl;
                break;
            case '2':
                cout << "\n\n\t\t***See your Patients Report***" << endl;
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