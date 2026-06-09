package main_menu;

import java.util.Scanner;

// main class ;
public class classes {
    public static void main(String[] args) {
        // corrected object creation
        login_singup ls = new login_singup();
        Scanner Input = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\t\t *** Welcome to Riphah International Hotel ***");
            System.out.println("\t Press 1 For Admin Login ");
            System.out.println("\t Press 2 For User Login ");
            System.out.println("\t Press 3 To exit .....");

            choice = Input.nextInt();

            switch (choice) {

            case 1:

                System.out.println("Welcome to Admin Page");
                admin a1 = new admin();
                a1.getdata();

                if (a1.admin_name.equals("Admin") && a1.admin_pass.equals("12345@GG")) {
                    adminmenu am = new adminmenu();
                    am.showmenu();
                }
                break;

            case 2:

                System.out.println("Welcome to User Page ");
                System.out.println("Press 1 If You have already Signed In");
                System.out.println("Press 2 To Create New Account ");
                int choose = Input.nextInt();

                if (choose == 1) {

                    System.out.println("Please Enter Login Data");

                    if (ls.login()) {
                        user u1 = new user();
                        u1.getdata();
                        usermenu um = new usermenu();
                        um.showmenu();
                    } else {
                        System.out.println("Please enter correct credentials first.");
                    }

                }

                if (choose == 2) {
                    System.out.println("Create Your Account");

                    ls.signUp();

                }

                break;

            case 3:

                System.out.println("Exiting...");

                break;

            default:

                System.out.println("Invalid Choice");
            }

        } while (choice != 3);
    }
}
