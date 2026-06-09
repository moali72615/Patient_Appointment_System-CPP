package main_menu;

import java.util.Scanner;

public class login_singup {
    // Simple storage (max 10 users)

    private String[] usernames = new String[10];
    private String[] passwords = new String[10];

    private int count = 0;

    // Signup page
    public void signUp() {
        Scanner input = new Scanner(System.in);

        System.out.print("Create Username: ");

        String user = input.nextLine();

        System.out.print("Create Password: ");

        String pass = input.nextLine();

        // check if user already exists
        for (int i = 0; i < count; i++) {
            if (usernames[i].equals(user)) {
                System.out.println("User already exists!");
                return;
            }
        }

        usernames[count] = user;
        passwords[count] = pass;

        count++;

        System.out.println("Account Created Successfully!");
    }

    // Login page
    public boolean login() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Username: ");
        String user = input.nextLine();
        System.out.print("Enter Password: ");
        String pass = input.nextLine();
        for (int i = 0; i < count; i++) {
            if (usernames[i].equals(user) && passwords[i].equals(pass)) {
                System.out.println("Login Successful! Welcome " + user);
                return true;
            }
        }

        System.out.println("Invalid Username or Password!");
        return false;
    }
}
